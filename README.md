# DSA Practice in C++

This repository contains my Data Structures & Algorithms practice.

## Topics
- Basic Problems
- Arrays
- Sliding Window
- Prefix/Suffix
- Two Pointers
- Binary Search
- Stack
- Queue
- Linked List
- Trees
- Graph
- Heap
- Backtracking
- Dynamic Programming

Sliding Window::

If you're preparing for **Microsoft, Amazon, Google, Meta, Adobe, Atlassian, Walmart**, these are the **top Sliding Window problems** you should know. They progress from beginner to interview level.

---

# 🟢 Beginner (Fixed Sliding Window)

## 1. Maximum Sum Subarray of Size K

**Pattern:** Fixed Sliding Window

Learn:

* Build initial window
* Remove left element
* Add right element

Difficulty: ⭐

---

## 2. Average of Subarrays of Size K

Pattern:

* Fixed Window

Difficulty: ⭐

---

## 3. Maximum Number of Vowels in a Substring of Given Length

**LeetCode 1456**

Pattern:

* Fixed Window

Difficulty: ⭐⭐

---

## 4. Find All Anagrams in a String

**LeetCode 438**

Pattern:

* Sliding Window + Frequency Array

Difficulty: ⭐⭐⭐

---

## 5. Permutation in String

**LeetCode 567**

Pattern:

* Sliding Window + Frequency Count

Difficulty: ⭐⭐⭐⭐

---

# 🟡 Variable Sliding Window

## 6. Longest Substring Without Repeating Characters ⭐⭐⭐⭐⭐

**LeetCode 3**

This is probably the most asked Sliding Window question.

Pattern:

```
Expand

Duplicate?

Shrink
```

Difficulty: ⭐⭐⭐⭐

---

## 7. Longest Repeating Character Replacement

**LeetCode 424**

Pattern:
Sliding Window

Difficulty: ⭐⭐⭐⭐

---

## 8. Minimum Size Subarray Sum

**LeetCode 209**

Pattern:

```
Expand

Sum >= Target?

Shrink
```

Difficulty: ⭐⭐⭐

---

## 9. Minimum Window Substring ⭐⭐⭐⭐⭐

**LeetCode 76**

One of the most famous interview questions.

Pattern:
Variable Window

Difficulty: ⭐⭐⭐⭐⭐

---

## 10. Fruit Into Baskets

**LeetCode 904**

Pattern:

At most 2 distinct elements

Difficulty: ⭐⭐⭐⭐

---

## 11. Longest Substring with At Most K Distinct Characters

Premium on LeetCode but very common.

Difficulty: ⭐⭐⭐⭐

---

## 12. Longest Substring with At Most Two Distinct Characters

Variation of above.

Difficulty: ⭐⭐⭐

---

## 13. Max Consecutive Ones III

**LeetCode 1004**

Pattern:
At most K zeros

Difficulty: ⭐⭐⭐⭐

---

## 14. Maximize the Confusion of an Exam

**LeetCode 2024**

Same pattern as Max Consecutive Ones.

Difficulty: ⭐⭐⭐⭐

---

## 15. Frequency of the Most Frequent Element

**LeetCode 1838**

Pattern:
Sliding Window + Sorting

Difficulty: ⭐⭐⭐⭐⭐

---

# 🔴 Hard Sliding Window

## 16. Sliding Window Maximum ⭐⭐⭐⭐⭐

**LeetCode 239**

Pattern:
Monotonic Queue

Difficulty: ⭐⭐⭐⭐⭐

---

## 17. Subarrays with K Different Integers

**LeetCode 992**

Pattern:
At Most K

Difficulty: ⭐⭐⭐⭐⭐

---

## 18. Binary Subarrays With Sum

**LeetCode 930**

Pattern:
Sliding Window / Prefix Sum

Difficulty: ⭐⭐⭐⭐

---

## 19. Count Number of Nice Subarrays

**LeetCode 1248**

Pattern:
Exactly K

Difficulty: ⭐⭐⭐⭐

---

## 20. Grumpy Bookstore Owner

**LeetCode 1052**

Pattern:
Fixed Window

Difficulty: ⭐⭐⭐

---

# Recommended Learning Order

| Order | Problem                                        | Difficulty |
| ----: | ---------------------------------------------- | :--------: |
|     1 | Maximum Sum Subarray of Size K                 |      ⭐     |
|     2 | Average of Subarrays of Size K                 |      ⭐     |
|     3 | Maximum Number of Vowels                       |     ⭐⭐     |
|     4 | Minimum Size Subarray Sum                      |     ⭐⭐⭐    |
|     5 | Longest Substring Without Repeating Characters |    ⭐⭐⭐⭐    |
|     6 | Fruit Into Baskets                             |    ⭐⭐⭐⭐    |
|     7 | Longest Repeating Character Replacement        |    ⭐⭐⭐⭐    |
|     8 | Max Consecutive Ones III                       |    ⭐⭐⭐⭐    |
|     9 | Minimum Window Substring                       |    ⭐⭐⭐⭐⭐   |
|    10 | Find All Anagrams in a String                  |     ⭐⭐⭐    |
|    11 | Permutation in String                          |    ⭐⭐⭐⭐    |
|    12 | Sliding Window Maximum                         |    ⭐⭐⭐⭐⭐   |
|    13 | Binary Subarrays With Sum                      |    ⭐⭐⭐⭐    |
|    14 | Count Number of Nice Subarrays                 |    ⭐⭐⭐⭐    |
|    15 | Frequency of the Most Frequent Element         |    ⭐⭐⭐⭐⭐   |
|    16 | Subarrays with K Different Integers            |    ⭐⭐⭐⭐⭐   |
|    17 | Longest Substring with K Distinct Characters   |    ⭐⭐⭐⭐    |
|    18 | Longest Substring with Two Distinct Characters |     ⭐⭐⭐    |
|    19 | Grumpy Bookstore Owner                         |     ⭐⭐⭐    |
|    20 | Maximize the Confusion of an Exam              |    ⭐⭐⭐⭐    |

---

# Sliding Window Recognition Cheat Sheet

When reading a problem, look for these clues:

| Problem Statement Contains...      | Think...                         |
| ---------------------------------- | -------------------------------- |
| Longest substring                  | Sliding Window                   |
| Smallest substring                 | Sliding Window                   |
| Maximum sum of contiguous subarray | Fixed Sliding Window             |
| Minimum length subarray            | Variable Sliding Window          |
| At most K distinct elements        | Variable Sliding Window          |
| Exactly K distinct elements        | Sliding Window + At Most K trick |
| Window size = K                    | Fixed Sliding Window             |
| Substring                          | Sliding Window                   |
| Contiguous subarray                | Sliding Window                   |

---

## For your DSA GitHub repository

Since you're organizing your solutions by pattern, I'd create a folder like this:

```text
SlidingWindow/
│
├── MaximumSumSubarray.cpp
├── AverageOfSubarrays.cpp
├── MaximumVowels.cpp
├── MinimumSizeSubarraySum.cpp
├── LongestSubstringWithoutRepeatingCharacters.cpp
├── FruitIntoBaskets.cpp
├── LongestRepeatingCharacterReplacement.cpp
├── MaxConsecutiveOnesIII.cpp
├── MinimumWindowSubstring.cpp
├── FindAllAnagrams.cpp
├── PermutationInString.cpp
├── SlidingWindowMaximum.cpp
├── BinarySubarraysWithSum.cpp
├── CountNumberOfNiceSubarrays.cpp
├── FrequencyOfMostFrequentElement.cpp
├── SubarraysWithKDifferentIntegers.cpp
├── LongestSubstringWithKDistinctCharacters.cpp
├── LongestSubstringWithTwoDistinctCharacters.cpp
├── GrumpyBookstoreOwner.cpp
└── MaximizeTheConfusionOfAnExam.cpp
```

These 20 problems cover the major sliding window variations you'll encounter:

* Fixed-size windows
* Variable-size windows
* Frequency/count-based windows
* Distinct-character windows
* Monotonic queue windows
* "At most K" and "Exactly K" patterns

Mastering these patterns will make it much easier to recognize and solve new sliding window problems during interviews.


This is an excellent pattern to master. **Prefix/Suffix Sum and Product** problems appear frequently in Microsoft, Amazon, Adobe, Atlassian, Walmart, and many other product-company interviews.

I recommend learning them in the following order.

---

# 🟢 Beginner

## 1. Running Sum of 1D Array ⭐

**LeetCode 1480**

Pattern:

* Prefix Sum

Learn:

* How to build a prefix sum array.

---

## 2. Find Pivot Index ⭐⭐

**LeetCode 724**

Pattern:

* Prefix Sum

Learn:

* Left Sum
* Right Sum

---

## 3. Range Sum Query – Immutable ⭐⭐

**LeetCode 303**

Pattern:

* Prefix Sum

Learn:

```text
Sum(left,right)

=

prefix[right]

-

prefix[left-1]
```

Very important.

---

## 4. Left and Right Sum Differences ⭐⭐

**LeetCode 2574**

Pattern:

* Prefix Sum

---

## 5. Product of Array Except Self ⭐⭐⭐⭐⭐

**LeetCode 238**

Pattern:

* Prefix Product
* Suffix Product

The most famous Prefix/Suffix interview problem.

---

# 🟡 Intermediate

## 6. Subarray Sum Equals K ⭐⭐⭐⭐⭐

**LeetCode 560**

Pattern:

* Prefix Sum
* Hash Map

One of the most frequently asked interview questions.

---

## 7. Continuous Subarray Sum ⭐⭐⭐⭐

**LeetCode 523**

Pattern:

* Prefix Sum
* Modulo

---

## 8. Maximum Score After Splitting a String ⭐⭐⭐

Pattern:

* Prefix Zeros
* Suffix Ones

---

## 9. Count Vowel Strings in Ranges ⭐⭐⭐

Pattern:

* Prefix Count

---

## 10. Number of Ways to Split Array ⭐⭐⭐

Pattern:

* Prefix Sum

---

# 🔵 Prefix Maximum / Minimum

## 11. Trapping Rain Water ⭐⭐⭐⭐⭐

**LeetCode 42**

Pattern:

```text
Prefix Max

Suffix Max
```

Classic interview question.

---

## 12. Best Time to Buy and Sell Stock ⭐⭐⭐⭐

**LeetCode 121**

Can be solved using:

```text
Suffix Maximum
```

or running minimum.

---

## 13. Buildings With an Ocean View ⭐⭐⭐

Pattern:

```text
Suffix Maximum
```

---

## 14. Maximum Difference Between Increasing Elements ⭐⭐⭐

Pattern:

```text
Prefix Minimum
```

---

# 🟠 Difference Array (Reverse Prefix)

## 15. Corporate Flight Bookings ⭐⭐⭐⭐

**LeetCode 1109**

Pattern:

Difference Array

*

Prefix Sum

---

## 16. Car Pooling ⭐⭐⭐⭐

**LeetCode 1094**

Pattern:

Difference Array

*

Prefix Sum

---

## 17. Shifting Letters II ⭐⭐⭐⭐

Pattern:

Difference Array

---

# 🔴 Advanced Prefix Problems

## 18. Binary Subarrays With Sum ⭐⭐⭐⭐

**LeetCode 930**

Pattern:

* Prefix Sum
* Sliding Window

---

## 19. Contiguous Array ⭐⭐⭐⭐

**LeetCode 525**

Pattern:

* Prefix Sum
* Hash Map

Very common Microsoft question.

---

## 20. Maximum Size Subarray Sum Equals K ⭐⭐⭐⭐

Pattern:

* Prefix Sum
* Hash Map

Excellent interview problem.

---

# Recommended Learning Order

| Order | Problem                                        | Pattern                         | Difficulty |
| ----: | ---------------------------------------------- | ------------------------------- | :--------: |
|     1 | Running Sum of 1D Array                        | Prefix Sum                      |      ⭐     |
|     2 | Pivot Index                                    | Prefix Sum                      |     ⭐⭐     |
|     3 | Range Sum Query                                | Prefix Sum                      |     ⭐⭐     |
|     4 | Left and Right Sum Differences                 | Prefix Sum                      |     ⭐⭐     |
|     5 | Product of Array Except Self                   | Prefix Product + Suffix Product |    ⭐⭐⭐⭐⭐   |
|     6 | Subarray Sum Equals K                          | Prefix Sum + Hash Map           |    ⭐⭐⭐⭐⭐   |
|     7 | Continuous Subarray Sum                        | Prefix Sum                      |    ⭐⭐⭐⭐    |
|     8 | Maximum Score After Splitting a String         | Prefix + Suffix                 |     ⭐⭐⭐    |
|     9 | Count Vowel Strings in Ranges                  | Prefix Count                    |     ⭐⭐⭐    |
|    10 | Number of Ways to Split Array                  | Prefix Sum                      |     ⭐⭐⭐    |
|    11 | Trapping Rain Water                            | Prefix Max + Suffix Max         |    ⭐⭐⭐⭐⭐   |
|    12 | Best Time to Buy and Sell Stock                | Prefix Min / Suffix Max         |    ⭐⭐⭐⭐    |
|    13 | Buildings With an Ocean View                   | Suffix Max                      |     ⭐⭐⭐    |
|    14 | Maximum Difference Between Increasing Elements | Prefix Min                      |     ⭐⭐⭐    |
|    15 | Corporate Flight Bookings                      | Difference Array                |    ⭐⭐⭐⭐    |
|    16 | Car Pooling                                    | Difference Array                |    ⭐⭐⭐⭐    |
|    17 | Shifting Letters II                            | Difference Array                |    ⭐⭐⭐⭐    |
|    18 | Binary Subarrays With Sum                      | Prefix Sum                      |    ⭐⭐⭐⭐    |
|    19 | Contiguous Array                               | Prefix Sum + Hash Map           |    ⭐⭐⭐⭐    |
|    20 | Maximum Size Subarray Sum Equals K             | Prefix Sum + Hash Map           |    ⭐⭐⭐⭐    |

---

# Pattern Recognition Cheat Sheet

| If you see...                     | Think...                        |
| --------------------------------- | ------------------------------- |
| Sum of elements before an index   | Prefix Sum                      |
| Product except current element    | Prefix Product + Suffix Product |
| Range sum queries                 | Prefix Sum                      |
| Left sum = Right sum              | Prefix Sum                      |
| Count items in a range            | Prefix Count                    |
| Maximum height/value to the left  | Prefix Maximum                  |
| Maximum height/value to the right | Suffix Maximum                  |
| Rain water between bars           | Prefix Max + Suffix Max         |
| Many range updates                | Difference Array                |
| Subarray sum equals target        | Prefix Sum + Hash Map           |

---

## Folder structure for your GitHub

Since you're organizing your repository by patterns, I would create it like this:

```text
PrefixSuffix/
│
├── RunningSum.cpp
├── PivotIndex.cpp
├── RangeSumQuery.cpp
├── LeftAndRightSumDifferences.cpp
├── ProductExceptSelf.cpp
├── SubarraySumEqualsK.cpp
├── ContinuousSubarraySum.cpp
├── MaximumScoreAfterSplittingString.cpp
├── CountVowelStringsInRanges.cpp
├── NumberOfWaysToSplitArray.cpp
├── TrappingRainWater.cpp
├── BestTimeToBuyAndSellStock.cpp
├── BuildingsWithOceanView.cpp
├── MaximumDifferenceBetweenIncreasingElements.cpp
├── CorporateFlightBookings.cpp
├── CarPooling.cpp
├── ShiftingLettersII.cpp
├── BinarySubarraysWithSum.cpp
├── ContiguousArray.cpp
└── MaximumSizeSubarraySumEqualsK.cpp
```

If you become comfortable with these 20 problems, you'll cover nearly all of the common Prefix/Suffix variations:

* Prefix Sum
* Prefix Product
* Suffix Sum
* Suffix Product
* Prefix Maximum
* Suffix Maximum
* Prefix Minimum
* Prefix Counts
* Difference Arrays
* Prefix Sum + Hash Map combinations

These patterns are widely applicable and will make many seemingly different interview questions feel much more familiar.

