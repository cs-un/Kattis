# Pivot
An O(n) Partition algorithm partitions an array A around a pivot element (pivot is a member of A) into three parts: a left sub-array that contains elements that are ≤ pivot, the pivot itself, and a right sub-array that contains elements that are > pivot.

A Partition algorithm is an integral part of a popular sorting algorithm Quicksort. Usually, the choice of pivot is randomized so that Quicksort has an expected O(nlogn) running time performance.

Now the actual job in this problem is this: Starting from an array A that has nn distinct integers, we partition A using one of the member of A as pivot to produce a transformed array A’. Given this transformed array A’, your job is to count how many integers that could have been the chosen pivot.

For example, if A’ = {2,1,3,4,7,5,6,8}, then 3 integers: {3,4,8} could have been the pivot of partition, e.g. {2,1,3} to the left of integer 4 are smaller than 4 and {7,5,6,8} to the right of integer 4 are greater than 4. However, the other 5 integers cannot possibly be the pivot, e.g. integer 7 cannot possibly be the pivot as there are {5,6} to the right of integer 7.

### Input
The input consists of two lines. The first line contains integer n (3≤n≤100000). The second line contains nn distinct 32-bit signed integers that describes the transformed array A′.

### Output
Output the required answer as a single integer in one line.

https://open.kattis.com/problems/pivot
