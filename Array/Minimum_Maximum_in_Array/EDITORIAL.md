# Maximum and Minimum Element in Array

**Link:** [GeeksforGeeks - Maximum and Minimum in an Array](https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/)

## Approaches:

### 1. Sort and Find
Sort the array and find the first and last elements.
**Minimum Number of Comparisons:** O(n log n)

### 2. Linear Search and Compare
Perform a linear search and compare elements.
**Minimum Number of Comparisons:** 2×n

### 3. Divide and Conquer Approach
Divide the array into two parts and compare the maximums and minimums of the two parts to get the maximum and minimum of the whole array.

- We pass the left and right index every time
- Handle the smallest subproblems: when there is only one element or two elements in the current subarray.
	- For one element (when the length is odd), the function returns a pair with that single element repeated.
	- For two elements (when the length is even), it compares the two elements and returns a pair with the minimum and maximum values.
- **Dividing the array**
	- If there are more than two elements, the function calculates the middle index mid to divide the array into two halves.
	- It then recursively calls itself on the left and right halves of the array, obtaining pairs left_part and right_part, each containing the minimum and maximum values of the respective halves.
- **Conquering**
	- The recursive calls continue until the base cases are reached.
	- As the recursion unwinds (moves back up the call stack)
	- We are assuming the first value of pair as minimum and second value as maximum
	- The code checks which value is smaller: left_part.first (minimum from the left subarray) or right_part.first (minimum from the right subarray).
	- The code checks which value is larger: left_part.second (maximum from the left subarray) or right_part.second (maximum from the right subarray).

In each recursive call, the problem is divided into smaller subproblems until reaching the base cases. At each level of the recursion, the minimum and maximum values are computed for the current subarray. As the recursion unwinds, these results are combined to determine the minimum and maximum values for larger and larger subarrays until the entire array is covered.

**Time Complexity:** O(n)
**Auxiliary Space:** O(log n) as the stack space will be filled for the maximum height of the tree formed during recursive calls, the same as a binary tree.

**Total Number of Comparisons**
```hash
Algorithmic Paradigm: Divide and Conquer 
T(n) = T(floor(n/2)) + T(ceil(n/2)) + 2
T(2) = 1
T(1) = 0
If n is a power of 2, then we can write T(n) as: T(n) = 2T(n/2) + 2
After solving the above recursion, we get 
T(n)  = 3n/2 -2
Thus, the approach does 3n/2 -2 comparisons if n is a power of 2. And it does more than 3n/2 -2 comparisons if n is not a power of 2.
```

### Pairwise Comparison Method
Finds the minimum and maximum values in an array by comparing elements in pairs. The initial handling accounts for the possibility of having an odd or even number of elements. The loop then processes the remaining elements in pairs, updating the minimum and maximum values.


