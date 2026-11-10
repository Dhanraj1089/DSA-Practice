# Prefix & Suffix Techniques in C++ — DSA Cheat Sheet

Precompute once, answer queries in O(1). This sheet covers the recurrences, identity elements, range-query limits, overflow pitfalls, core interview patterns, and a practice roadmap.

> **Compile with:** `g++ -std=c++17 -Wall file.cpp` (`std::gcd` / `std::lcm` need C++17).
> All snippets below were compiled and tested.

---

## Table of Contents

1. [Core idea](#1-core-idea)
2. [Notation](#2-notation)
3. [Default template (sentinel array)](#3-default-template-sentinel-array)
4. [Formula reference](#4-formula-reference)
5. [Identity elements](#5-identity-elements)
6. [Which operations support range queries?](#6-which-operations-support-range-queries)
7. [Worked example tables](#7-worked-example-tables)
8. [Overflow and pitfalls](#8-overflow-and-pitfalls)
9. [Core interview patterns](#9-core-interview-patterns)
10. [Extensions: 2D prefix and difference array](#10-extensions-2d-prefix-and-difference-array)
11. [General principle: monoids](#11-general-principle-monoids)
12. [Problem-to-technique map](#12-problem-to-technique-map)
13. [Practice roadmap](#13-practice-roadmap)
14. [What to memorise](#14-what-to-memorise)

---

## 1. Core idea

- **Prefix:** accumulate information left to right.
- **Suffix:** accumulate information right to left.

Instead of rescanning the array for every query, precompute once in O(n) and reuse.

## 2. Notation

Example array (0-indexed):

$$A = [2, 4, 3, 5, 6]$$

- $A[i]$: element at index $i$
- $n$: number of elements
- $P[i]$: prefix value ending at $i$
- $S[i]$: suffix value starting at $i$

## 3. Default template (sentinel array)

Use an array of size $n+1$ so that $P[0]$ is the empty prefix. This removes the `P[-1]` edge case in range queries.

$$P[0] = 0, \quad P[i+1] = P[i] + A[i]$$

$$\text{Sum}(L, R) = P[R+1] - P[L] \quad (\text{0-indexed, inclusive})$$

```cpp
vector<long long> P(n + 1, 0);               // P[i] = sum of first i elements
for (int i = 0; i < n; i++) P[i + 1] = P[i] + a[i];

long long q = P[R + 1] - P[L];               // sum of a[L..R]
```

Standard library alternatives:

```cpp
#include <numeric>
partial_sum(a.begin(), a.end(), out.begin());      // inclusive prefix
inclusive_scan(a.begin(), a.end(), out.begin());   // C++17, parallel-capable
exclusive_scan(a.begin(), a.end(), out.begin(), 0);// shifted by one
```

Suffix sum, same idea mirrored:

```cpp
vector<long long> S(n + 1, 0);               // S[i] = sum of a[i..n-1]
for (int i = n - 1; i >= 0; i--) S[i] = S[i + 1] + a[i];
```

## 4. Formula reference

General recurrences, where $\text{OP}$ is an associative operation:

$$\text{Prefix}[i] = \text{Prefix}[i-1] \;\text{OP}\; A[i]$$

$$\text{Suffix}[i] = A[i] \;\text{OP}\; \text{Suffix}[i+1]$$

| Operation | Prefix | Suffix | C++ expression |
| --- | --- | --- | --- |
| Sum | $P[i-1] + A[i]$ | $S[i+1] + A[i]$ | `p[i-1] + a[i]` |
| Product | $P[i-1] \times A[i]$ | $S[i+1] \times A[i]$ | `p[i-1] * a[i]` |
| Maximum | $\max(P[i-1], A[i])$ | $\max(S[i+1], A[i])$ | `max(p[i-1], a[i])` |
| Minimum | $\min(P[i-1], A[i])$ | $\min(S[i+1], A[i])$ | `min(p[i-1], a[i])` |
| XOR | $P[i-1] \oplus A[i]$ | $S[i+1] \oplus A[i]$ | `p[i-1] ^ a[i]` |
| GCD | $\gcd(P[i-1], A[i])$ | $\gcd(S[i+1], A[i])$ | `gcd(p[i-1], a[i])` |
| LCM | $\operatorname{lcm}(P[i-1], A[i])$ | $\operatorname{lcm}(S[i+1], A[i])$ | `lcm(p[i-1], a[i])` |
| AND | $P[i-1] \mathbin{\&} A[i]$ | $S[i+1] \mathbin{\&} A[i]$ | `p[i-1] & a[i]` |
| OR | $P[i-1] \mathbin{\mid} A[i]$ | $S[i+1] \mathbin{\mid} A[i]$ | `p[i-1] \| a[i]` |
| Count (condition) | $P[i-1] + [\text{cond}(A[i])]$ | $S[i+1] + [\text{cond}(A[i])]$ | `p[i-1] + (cond ? 1 : 0)` |

Count example, number of even elements:

$$PEven[i] = PEven[i-1] + \begin{cases} 1 & A[i] \bmod 2 = 0 \\ 0 & \text{otherwise} \end{cases}$$

Typical conditions: positive, negative, zero, even, odd, greater than $K$.

LCM helper (divide first to reduce overflow):

```cpp
long long lcmValue(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}
```

## 5. Identity elements

Initial value for a running accumulator (or for index `0` of a sentinel array):

| Operation | Identity |
| --- | --- |
| Sum, XOR, OR | `0` |
| Product, LCM | `1` |
| AND | all ones (`~0`) |
| Min | `INT_MAX` |
| Max | `INT_MIN` |
| GCD | `0` (since $\gcd(0, x) = x$) |

## 6. Which operations support range queries?

Prefix arrays answer an arbitrary range $[L, R]$ **only if the operation has an inverse**.

| Operation | Arbitrary range from prefix? | How |
| --- | --- | --- |
| Sum | Yes | $P[R+1] - P[L]$ |
| XOR | Yes | $P[R+1] \oplus P[L]$ |
| Count | Yes | $P[R+1] - P[L]$ |
| Product | Only if no zeros (and no overflow) | division, fragile |
| Min, Max, GCD, LCM, AND, OR | **No** | no inverse |

For the "No" rows, prefix/suffix arrays give you:

- aggregate over a prefix or a suffix,
- aggregate of "everything except index $i$" (combine `prefix[i-1]` and `suffix[i+1]`).

For arbitrary-range min/max/GCD/AND/OR queries use a **sparse table** (static array, O(1) query for idempotent ops) or a **segment tree** (supports updates).

## 7. Worked example tables

Array $A = [2, 4, 3, 5, 6]$:

| Index | $A[i]$ | Prefix sum | Suffix sum | Prefix product | Suffix product | Prefix max | Suffix max |
| --- | --- | --- | --- | --- | --- | --- | --- |
| 0 | 2 | 2 | 20 | 2 | 720 | 2 | 6 |
| 1 | 4 | 6 | 18 | 8 | 360 | 4 | 6 |
| 2 | 3 | 9 | 14 | 24 | 90 | 4 | 6 |
| 3 | 5 | 14 | 11 | 120 | 30 | 5 | 6 |
| 4 | 6 | 20 | 6 | 720 | 6 | 6 | 6 |

Range sum, indices 1 to 3:

$$\text{Sum}(1, 3) = P[4] - P[1] = 14 - 2 = 12 \quad (4 + 3 + 5 = 12)$$

(using the sentinel array, where $P[k]$ is the sum of the first $k$ elements).

## 8. Overflow and pitfalls

- Use `long long` for sums and products. Prefix products and LCMs overflow very quickly.
- If the problem asks for a modulus, apply it at every step. Division then needs a modular inverse, and breaks entirely if a value is divisible by the modulus.
- Prefix products with zeros: division-based "product except self" fails. Use the prefix × suffix method instead.
- Off-by-one on ranges: prefer the sentinel array and write down whether your query is inclusive/exclusive.
- Non-commutative operations: order matters. Prefix is $A[0] \text{ OP } \dots \text{ OP } A[i]$, suffix is $A[i] \text{ OP } \dots \text{ OP } A[n-1]$. Do not swap operands.

## 9. Core interview patterns

### 9.1 Product of Array Except Self (LeetCode 238)

Idea: $\text{Result}[i] = \text{PrefixProduct}[i-1] \times \text{SuffixProduct}[i+1]$, with boundary values $\text{PrefixProduct}[-1] = 1$ and $\text{SuffixProduct}[n] = 1$.

O(n) time, O(1) extra space (output array excluded), no division:

```cpp
vector<int> productExceptSelf(vector<int>& a) {
    int n = a.size();
    vector<int> res(n, 1);
    for (int i = 1; i < n; i++) res[i] = res[i - 1] * a[i - 1];  // left products
    int right = 1;
    for (int i = n - 1; i >= 0; i--) {
        res[i] *= right;                                          // multiply right products
        right *= a[i];
    }
    return res;
}
```

### 9.2 Trapping Rain Water (LeetCode 42)

$$\text{LeftMax}[i] = \max(A[0..i]), \quad \text{RightMax}[i] = \max(A[i..n-1])$$

$$\text{Water}[i] = \min(\text{LeftMax}[i], \text{RightMax}[i]) - A[i]$$

$$\text{Total} = \sum_{i=0}^{n-1} \text{Water}[i]$$

Prefix/suffix version, O(n) time, O(n) space:

```cpp
int trap(vector<int>& h) {
    int n = h.size();
    if (n == 0) return 0;
    vector<int> L(n), R(n);
    L[0] = h[0];
    for (int i = 1; i < n; i++) L[i] = max(L[i - 1], h[i]);
    R[n - 1] = h[n - 1];
    for (int i = n - 2; i >= 0; i--) R[i] = max(R[i + 1], h[i]);
    int ans = 0;
    for (int i = 0; i < n; i++) ans += min(L[i], R[i]) - h[i];
    return ans;
}
```

Two-pointer follow-up (interviewers will ask), O(n) time, O(1) space:

```cpp
int trap(vector<int>& h) {
    int l = 0, r = (int)h.size() - 1, lm = 0, rm = 0, ans = 0;
    while (l < r) {
        if (h[l] < h[r]) { lm = max(lm, h[l]); ans += lm - h[l++]; }
        else             { rm = max(rm, h[r]); ans += rm - h[r--]; }
    }
    return ans;
}
```

### 9.3 Prefix sum + HashMap (Subarray Sum Equals K, LeetCode 560)

The most important prefix pattern. A subarray $(j, i]$ sums to $k$ exactly when $P[i] - P[j] = k$, so for each $i$ count earlier prefixes equal to $P[i] - k$.

```cpp
int subarraySum(vector<int>& a, int k) {
    unordered_map<long long, int> cnt{{0, 1}};   // empty prefix seen once
    long long sum = 0;
    int ans = 0;
    for (int x : a) {
        sum += x;
        auto it = cnt.find(sum - k);
        if (it != cnt.end()) ans += it->second;
        cnt[sum]++;
    }
    return ans;
}
```

Variants:

| Variant | Change |
| --- | --- |
| Divisible by $k$ (LC 974, 523) | key on `((sum % k) + k) % k` |
| Equal 0s and 1s (LC 525) | map 0 to -1, find longest subarray with sum 0 (store first index) |
| Longest subarray with sum $k$ | store first occurrence index instead of count |

### 9.4 Pivot / Equilibrium Index (LeetCode 724)

Index $i$ is a pivot when $\text{left sum} = \text{right sum}$, i.e. $P[i] = \text{total} - P[i] - A[i]$ (with sentinel $P$).

### 9.5 Prefix min for stock problems (LeetCode 121)

Track the minimum price seen so far (prefix min) and maximise `price[i] - prefixMin`.

### 9.6 Maximum Product Subarray (LeetCode 152)

Scan products from the left and from the right (prefix and suffix products), resetting to 1 after a zero. The answer is the max seen in either direction.

## 10. Extensions: 2D prefix and difference array

### 10.1 2D prefix sum

With a 1-indexed padded table:

$$P[i][j] = A[i][j] + P[i-1][j] + P[i][j-1] - P[i-1][j-1]$$

Sum of the rectangle with corners $(r_1, c_1)$ to $(r_2, c_2)$:

$$P[r_2][c_2] - P[r_1-1][c_2] - P[r_2][c_1-1] + P[r_1-1][c_1-1]$$

```cpp
vector<vector<long long>> P(R + 1, vector<long long>(C + 1, 0));
for (int i = 1; i <= R; i++)
    for (int j = 1; j <= C; j++)
        P[i][j] = g[i-1][j-1] + P[i-1][j] + P[i][j-1] - P[i-1][j-1];

// rectangle sum, 1-indexed corners (r1,c1)..(r2,c2)
long long q = P[r2][c2] - P[r1-1][c2] - P[r2][c1-1] + P[r1-1][c1-1];
```

### 10.2 Difference array (inverse of prefix sum)

Range update "add $v$ to $A[l..r]$" in O(1), then one prefix-sum pass recovers the array.

```cpp
vector<int> d(n + 1, 0);
auto update = [&](int l, int r, int v) { d[l] += v; d[r + 1] -= v; };

update(1, 3, 5);
partial_sum(d.begin(), d.end(), d.begin());   // d[0..n-1] is the updated increments
```

Used in: LC 370, 1094 (range-update problems).

## 11. General principle: monoids

Every prefix/suffix scan relies on an operation that is:

1. **Associative:** $(a \text{ OP } b) \text{ OP } c = a \text{ OP } (b \text{ OP } c)$
2. Has an **identity element** $e$ with $e \text{ OP } a = a$.

That structure is a **monoid**, and it is exactly what makes the scan valid. If the operation also has **inverses** (sum, XOR), you additionally get O(1) arbitrary range queries by "subtracting" two prefixes.

## 12. Problem-to-technique map

| Application | Technique | Example |
| --- | --- | --- |
| Range sum query | Prefix sum | LC 303 |
| Range XOR query | Prefix XOR | LC 1310 |
| Product except self | Prefix + suffix product | LC 238 |
| Trapping rain water | Prefix max + suffix max | LC 42 |
| Pivot / equilibrium index | Prefix sum | LC 724 |
| Split array / partition | Prefix + suffix sum | LC 2270, 2256 |
| Count subarrays with sum $k$ | Prefix sum + HashMap | LC 560 |
| Subarray divisible by $k$ | Prefix mod + HashMap | LC 523, 974 |
| Maximum subarray | Kadane (or prefix min) | LC 53 |
| Circular max subarray | Prefix/suffix sums or Kadane variant | LC 918 |
| Best time to buy/sell | Prefix min | LC 121 |
| Max product subarray | Prefix + suffix product | LC 152 |
| Range update | Difference array | LC 370, 1094 |
| 2D range sum | 2D prefix sum | LC 304 |
| Arbitrary range min/max/GCD | **Sparse table / segment tree**, not prefix | n/a |
| Exclude-one-element GCD | Prefix GCD + suffix GCD | custom problems |
| Count subarrays with GCD = k | Brute force or sparse table, not prefix | LC 2447 |

## 13. Practice roadmap

**Tier 1 (core, in this order):**

| # | Problem | LC | Difficulty |
| --- | --- | --- | --- |
| 1 | Running Sum of 1D Array | 1480 | Easy |
| 2 | Find Pivot Index | 724 | Easy |
| 3 | Range Sum Query - Immutable | 303 | Easy |
| 4 | Find the Highest Altitude | 1732 | Easy |
| 5 | Minimum Value to Get Positive Step by Step Sum | 1413 | Easy |
| 6 | Product of Array Except Self | 238 | Medium |
| 7 | Subarray Sum Equals K | 560 | Medium |
| 8 | Contiguous Array | 525 | Medium |
| 9 | Trapping Rain Water | 42 | Hard |
| 10 | Maximum Sum Circular Subarray | 918 | Medium |

**Tier 2 (extensions):**

| Theme | Problems |
| --- | --- |
| Prefix + HashMap | 523, 974, 930 |
| Prefix/suffix split | 2270, 2256, 2574, 1423, 1658 |
| XOR queries | 1310 |
| Difference array and 2D | 370, 1094, 304 |
| Other | 121, 152, 2640, 2447 |

## 14. What to memorise

Priority order:

1. Prefix sum (sentinel form) and range query
2. Prefix sum + HashMap
3. Prefix/suffix max and min
4. Prefix/suffix product (and the O(1)-space trick)
5. Prefix XOR
6. Prefix/suffix GCD and count/frequency
7. 2D prefix and difference array

Don't memorise 20 separate algorithms. Memorise the **recurrence**, the **identity element**, the **traversal direction**, and **how prefix and suffix results combine**. Most array problems are variations of that one idea.
