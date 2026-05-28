# Find Index Where Frequency Becomes X

## Problem Statement

You are given:
- an integer array `nums`
- an integer `x`
- an array `queries`

For each query `q`,
return the index where element `q`
reaches frequency `x` in `nums`.

If `q` never reaches frequency `x`,
return `-1`.

---

## Example

Input:

nums = [1,2,1,3,1,2]
x = 2
queries = [1,2,3]

Output:

[2,5,-1]

---

## Explanation

- 1 reaches frequency 2 at index 2
- 2 reaches frequency 2 at index 5
- 3 never reaches frequency 2

---

## Constraints

- 1 <= nums.length <= 10^5
- 1 <= queries.length <= 10^5

---

## Approach

Use:

unordered_map<int,pair<int,int>>

Where:
- first  -> frequency
- second -> index where frequency became x

Time Complexity: O(n + q)

Space Complexity: O(n)
