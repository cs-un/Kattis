# Increasing Subsequence
A strictly increasing sequence is a sequence of numbers a1,a2,…,an such that, for 1<i≤n, ai−1<ai. A subsequence of a1,a2,…,an is identified by a strictly increasing sequence of indices, x1,x2,…,xm where 1≤x1 and xm≤n. We say ax1,ax2,…,axm is a subsequence of a1,a2,…,an. For example, given the sequence 8,90,4,10000,2,18,60,172,99, we can say that 90,4,10000,18 is a subsequence but 8,90,18,2,60 is not. The subsequence 4,18,60,172 is a subsequence that is, itself, strictly increasing.

Given a sequence of numbers, can you write a program to find a strictly increasing subsequence that is as long as possible?

### Input
Input has up to 200 test cases, one per line. Each test case starts with an integer 1≤n≤200, followed by n integer values, all in the range [0,10^8]. A value of zero for n marks the end of input.

### Output
For each test case, output the length of the longest strictly increasing subsequence, followed the values of the lexicographically-earliest such sequence. A sequence a1,a2,…,an is lexicographically earlier than b1,b2,…,bm if some ai<bi and aj=bj for all j<i.

https://open.kattis.com/problems/increasingsubsequence