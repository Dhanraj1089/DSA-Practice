# 100 Basic DSA Problems: Math, Arrays, General

> Goal: build pattern fluency before intermediate, advanced, and hard problems.
> LC = LeetCode problem number, written from memory. Confirm the number or search by title before relying on it. "—" means a classic with no single canonical LeetCode entry.
> Difficulty: E = easy, M = medium. Do the E items fast; spend time on the M items.

## How to use this list

1. For each problem: write brute force first, state its complexity, then improve it.
2. Name the pattern in one line before coding (two pointers, prefix sum, hashing, and so on).
3. After solving, write the time and space complexity and one edge case that nearly broke you (empty input, single element, negatives, overflow, duplicates).
4. Re-solve the starred (★) problems cold after 3 days and again after 2 weeks.
5. Pace: 3 to 4 problems a day gives about a month. Do not skip the M problems to finish faster.

---

## Part 1: Math and Bit Manipulation (1 to 25)

| # | Problem | Core idea | LC | Diff |
|--:|---|---|---|---|
| 1 | Fizz Buzz | Loops, modulo | 412 | E |
| 2 | Palindrome Number | Reverse half the digits | 9 | E |
| 3 | Reverse Integer | Digit extraction, overflow checks | 7 | M |
| 4 | Add Digits | Digit sum, digital root formula | 258 | E |
| 5 | GCD and LCM | Euclid's algorithm, lcm = a*b/gcd | — | E |
| 6 | Primality test | Trial division up to sqrt(n) | — | E |
| 7 ★ | Count Primes | Sieve of Eratosthenes | 204 | M |
| 8 | Prime factorization | Divide out factors up to sqrt(n) | — | E |
| 9 | Factorial Trailing Zeroes | Count factors of 5 | 172 | M |
| 10 | Power of Two | n & (n-1) == 0 | 231 | E |
| 11 | Power of Three | Loop divide, or max power divisibility | 326 | E |
| 12 ★ | Pow(x, n) | Fast exponentiation, negative n | 50 | M |
| 13 ★ | Sqrt(x) | Binary search on the answer | 69 | E |
| 14 | Happy Number | Cycle detection (set or Floyd) | 202 | E |
| 15 | Armstrong Number | Digit powers sum | — | E |
| 16 | Nth Fibonacci | Iterative O(1) space, then memoization | 509 | E |
| 17 | Ugly Number | Repeated division by 2, 3, 5 | 263 | E |
| 18 | Excel Sheet Column Number | Base-26 conversion | 171 | E |
| 19 | Roman to Integer | Left-to-right, subtract when smaller precedes larger | 13 | E |
| 20 | Add Binary | String addition with carry | 67 | E |
| 21 | Plus One | Carry propagation | 66 | E |
| 22 | Number of 1 Bits | n & (n-1) clears lowest set bit | 191 | E |
| 23 ★ | Single Number | XOR cancels pairs | 136 | E |
| 24 | Missing Number | XOR or sum formula | 268 | E |
| 25 | Counting Bits | DP: bits[i] = bits[i >> 1] + (i & 1) | 338 | E |

---

## Part 2: Arrays and Matrices (26 to 60)

| # | Problem | Core idea | LC | Diff |
|--:|---|---|---|---|
| 26 ★ | Two Sum | Hash map of value to index | 1 | E |
| 27 | Contains Duplicate | Hash set | 217 | E |
| 28 ★ | Best Time to Buy and Sell Stock | Track running minimum | 121 | E |
| 29 ★ | Maximum Subarray | Kadane's algorithm | 53 | M |
| 30 | Move Zeroes | Two pointers, stable in place | 283 | E |
| 31 | Remove Duplicates from Sorted Array | Slow and fast pointers | 26 | E |
| 32 | Merge Sorted Array | Fill from the back | 88 | E |
| 33 ★ | Rotate Array | Three reversals | 189 | M |
| 34 | Squares of a Sorted Array | Two pointers from both ends | 977 | E |
| 35 ★ | Majority Element | Boyer-Moore voting | 169 | E |
| 36 | Find Pivot Index | Prefix sum vs total | 724 | E |
| 37 | Running Sum of 1d Array | Prefix sum | 1480 | E |
| 38 ★ | Product of Array Except Self | Prefix and suffix products, no division | 238 | M |
| 39 | Two Sum II (sorted input) | Two pointers | 167 | M |
| 40 ★ | Container With Most Water | Two pointers, move the shorter side | 11 | M |
| 41 ★ | 3Sum | Sort, fix one, two pointers, skip duplicates | 15 | M |
| 42 ★ | Sort Colors | Dutch national flag, three pointers | 75 | M |
| 43 | Next Permutation | Find pivot, swap, reverse suffix | 31 | M |
| 44 | Find All Numbers Disappeared in an Array | Index marking | 448 | E |
| 45 | Find the Duplicate Number | Floyd cycle on indices | 287 | M |
| 46 | First Missing Positive | Place values at their index | 41 | M (hard-ish) |
| 47 ★ | Subarray Sum Equals K | Prefix sum plus hash map | 560 | M |
| 48 | Maximum Product Subarray | Track max and min product | 152 | M |
| 49 ★ | Merge Intervals | Sort by start, merge | 56 | M |
| 50 | Longest Consecutive Sequence | Hash set, start only at sequence heads | 128 | M |
| 51 ★ | Trapping Rain Water | Two pointers or prefix max arrays | 42 | M (hard-ish) |
| 52 | Pascal's Triangle | Build row from previous row | 118 | E |
| 53 | Rotate Image | Transpose then reverse rows | 48 | M |
| 54 | Spiral Matrix | Boundary shrinking | 54 | M |
| 55 | Set Matrix Zeroes | Use first row and column as markers | 73 | M |
| 56 | Search a 2D Matrix | Binary search on flattened index | 74 | M |
| 57 | Best Time to Buy and Sell Stock II | Greedy: sum of positive deltas | 122 | M |
| 58 ★ | Jump Game | Greedy farthest reach | 55 | M |
| 59 | Max Consecutive Ones | Running counter | 485 | E |
| 60 | Kth Largest Element in an Array | Min-heap of size k, or quickselect | 215 | M |

---

## Part 3: Strings, Hashing, Search, Linked Lists, Stacks, Recursion, Trees, Intro Graph/DP (61 to 100)

### Strings (61 to 70)

| # | Problem | Core idea | LC | Diff |
|--:|---|---|---|---|
| 61 | Valid Palindrome | Two pointers, skip non-alphanumeric | 125 | E |
| 62 | Valid Anagram | Frequency counts | 242 | E |
| 63 | Reverse String | In-place swap | 344 | E |
| 64 | First Unique Character in a String | Frequency map, second pass | 387 | E |
| 65 | Longest Common Prefix | Vertical scan | 14 | E |
| 66 ★ | Longest Substring Without Repeating Characters | Sliding window plus last-seen map | 3 | M |
| 67 ★ | Group Anagrams | Sorted string or count tuple as key | 49 | M |
| 68 | Is Subsequence | Two pointers | 392 | E |
| 69 | Longest Palindromic Substring | Expand around center | 5 | M |
| 70 | String Compression | In-place two pointers | 443 | M |

### Hashing (71 to 73)

| # | Problem | Core idea | LC | Diff |
|--:|---|---|---|---|
| 71 ★ | Top K Frequent Elements | Count, then heap or bucket sort | 347 | M |
| 72 | Isomorphic Strings | Two-way character mapping | 205 | E |
| 73 | Ransom Note | Frequency counts | 383 | E |

### Binary search (74 to 77)

| # | Problem | Core idea | LC | Diff |
|--:|---|---|---|---|
| 74 ★ | Binary Search | Template: lo, hi, mid, no overflow | 704 | E |
| 75 | Search Insert Position | Lower bound | 35 | E |
| 76 ★ | Find First and Last Position of Element | Lower and upper bound | 34 | M |
| 77 ★ | Search in Rotated Sorted Array | Identify the sorted half | 33 | M |

### Linked lists (78 to 83)

| # | Problem | Core idea | LC | Diff |
|--:|---|---|---|---|
| 78 ★ | Reverse Linked List | Iterative three pointers, then recursive | 206 | E |
| 79 | Merge Two Sorted Lists | Dummy head | 21 | E |
| 80 ★ | Linked List Cycle | Floyd fast and slow | 141 | E |
| 81 | Middle of the Linked List | Fast and slow | 876 | E |
| 82 | Remove Nth Node From End of List | Gap of n between two pointers | 19 | M |
| 83 | Palindrome Linked List | Find middle, reverse second half, compare | 234 | E |

### Stacks and queues (84 to 88)

| # | Problem | Core idea | LC | Diff |
|--:|---|---|---|---|
| 84 ★ | Valid Parentheses | Stack of openers | 20 | E |
| 85 | Min Stack | Parallel min stack | 155 | M |
| 86 ★ | Daily Temperatures | Monotonic stack | 739 | M |
| 87 | Implement Queue using Stacks | Two stacks, amortized O(1) | 232 | E |
| 88 | Next Greater Element I | Monotonic stack plus map | 496 | E |

### Recursion and backtracking (89 to 91)

| # | Problem | Core idea | LC | Diff |
|--:|---|---|---|---|
| 89 ★ | Subsets | Include or exclude recursion | 78 | M |
| 90 ★ | Permutations | Swap or used-array backtracking | 46 | M |
| 91 | Generate Parentheses | Track open and close counts | 22 | M |

### Trees (92 to 97)

| # | Problem | Core idea | LC | Diff |
|--:|---|---|---|---|
| 92 | Maximum Depth of Binary Tree | DFS | 104 | E |
| 93 | Invert Binary Tree | Swap children recursively | 226 | E |
| 94 | Same Tree | Parallel DFS | 100 | E |
| 95 ★ | Binary Tree Level Order Traversal | BFS with queue, level size | 102 | M |
| 96 ★ | Validate Binary Search Tree | Pass min/max bounds, or inorder | 98 | M |
| 97 | Lowest Common Ancestor of a BST | Use BST ordering | 235 | M |

### Intro graph and DP (98 to 100)

| # | Problem | Core idea | LC | Diff |
|--:|---|---|---|---|
| 98 ★ | Number of Islands | DFS or BFS on grid | 200 | M |
| 99 ★ | Climbing Stairs | 1D DP, Fibonacci recurrence | 70 | E |
| 100 ★ | House Robber | 1D DP: take or skip | 198 | M |

---

## Pattern cheat sheet (what these 100 teach you)

| Pattern | Recognize it when | Problems here |
|---|---|---|
| Hash map / set | Need O(1) lookup, counts, duplicates | 26, 27, 47, 50, 62, 67, 71 |
| Two pointers | Sorted input, in-place edits, pairs | 30, 31, 34, 39, 40, 41, 61 |
| Sliding window | Contiguous range with a constraint | 66 (then see next section) |
| Prefix sum | Range sums, subarray sums | 36, 37, 38, 47 |
| Kadane / greedy | Best contiguous or locally optimal choice | 29, 48, 57, 58 |
| Binary search | Sorted data or monotonic answer space | 13, 56, 74 to 77 |
| Fast and slow pointers | Cycles, midpoints | 14, 45, 80, 81 |
| Monotonic stack | Next greater or smaller element | 86, 88 |
| Backtracking | Generate all combinations | 89, 90, 91 |
| Tree DFS / BFS | Hierarchical data | 92 to 97 |
| Grid DFS/BFS | Connected components on a matrix | 98 |
| 1D DP | Choice at each step depends on a few previous states | 16, 99, 100 |
| Bit manipulation | Parity, uniqueness, powers of two | 10, 22, 23, 24, 25 |

---

## After the 100: path to intermediate, advanced, and hard

Move on when you can solve a fresh easy in 10 to 15 minutes and a fresh medium in 25 to 30 with complexity stated. Then go topic by topic, about 10 to 15 problems each, easy to hard.

**Intermediate (mediums, pattern depth)**
- Sliding window: Minimum Size Subarray Sum, Longest Repeating Character Replacement, Permutation in String
- Heaps: Merge k Sorted Lists, Find Median from Data Stream, Task Scheduler
- Intervals: Insert Interval, Meeting Rooms II, Non-overlapping Intervals
- Graphs: Course Schedule (topological sort), Clone Graph, Rotting Oranges (multi-source BFS), Pacific Atlantic Water Flow
- Union-Find: Number of Provinces, Redundant Connection
- Trees: Binary Tree Maximum Path Sum, Serialize and Deserialize, Kth Smallest in BST
- DP: Coin Change, Longest Increasing Subsequence, Word Break, Unique Paths, Decode Ways, Partition Equal Subset Sum
- Design: LRU Cache, Implement Trie, Time Based Key-Value Store

**Advanced**
- Monotonic stack/deque: Largest Rectangle in Histogram, Sliding Window Maximum
- Graphs: Dijkstra (Network Delay Time), Bellman-Ford (Cheapest Flights Within K Stops), Minimum Spanning Tree
- DP: Edit Distance, Longest Common Subsequence, Knapsack variants, Burst Balloons, DP on trees, bitmask DP
- Advanced structures: Segment Tree, Fenwick Tree, Trie with wildcards
- Strings: KMP, Rabin-Karp, Z-function

**Difficult (hards, mixed patterns)**
- Median of Two Sorted Arrays, Minimum Window Substring, Word Ladder II, N-Queens, Regular Expression Matching, Longest Valid Parentheses, Alien Dictionary, Maximal Rectangle
- Contest-style mixed-topic sets once per week, timed

**Habit that compounds:** keep a one-page mistake log (pattern missed, wrong assumption, edge case). Review it before each session.
