#Binary search tree
A binary search tree is a tree in which every node has at most two children nodes (a left and a right child). Each node has an integer written inside it. If the number XX is written inside a node, then the numbers in its left subtree are less than XX and the numbers in its right subtree are greater than X. You will be given a sequence of integers between 1 and NN (inclusive) such that each number appears in the sequence exactly once. You are to create a binary search tree from the sequence, putting the first number in the root node and inserting every other number in order.

When inserting a new number YY in a tree, you first traverse the tree as if you were searching for YY. When you arrive at a node ZZ such that you can’t continue searching for YY, you put YY as a left or right son of ZZ depending on if Z>YZ>Y or Z<YZ<Y, so that after the insertion the tree will still be a binary search tree. After the insertion you add the depth of YY to a counter CC and print the value of CC. The counter CC is set to 00 in the beginning.

###Input
The first line contains the integer NN (1≤N≤300000)(1≤N≤300000), the length of the sequence.

The remaining NN lines contain the numbers in the sequence, integers in the interval [1,N][1,N]. The numbers will be distinct.

###Output
Output NN integers each on its own line, the values of the counter CC after each number is inserted into the tree.

https://open.kattis.com/problems/bst