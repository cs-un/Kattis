#ICPC Tutorial
ACM-ICPC returns to Singapore in 2015 after a long absence. There may be new contestants from this region who are joining ACM-ICPC for the very first time1. This problem serves as a tutorial for such contestants.

First, let establish the fact that the problems posed in ICPC are not research problems where nobody on earth knows how to solve them efficiently. Some people (at least the problem authors) have solved these problems before. There can be more than one possible solution to these problems. As the contest has limited time (5 hours) and each problem has an associated time penalty, it is always beneficial to pick the easiest problem to solve first2.

Some problems may look complicated but happen to have a small input size constraint nn that allows even a naïve brute force solution to pass. Some other problems may look simple but standard textbook algorithm cannot be used to pass the time limit as the input size constraint nn is too big and one has to figure out the special properties that simplify the problem.

In the “Competitive Programming” book3 that has been written specifically for preparing for programming contests such as ICPC, we have the following compilation of typical algorithm complexities found in programming contests:

|t|algorithm complexity for input size nn
---|---
1|O(n!)
2|O(2n)
3|O(n4)
4|O(n3)
5|O(n2)
6|O(nlog2⁡n)
7|O(n)
For this problem, we ignore the constant factor and the lower terms hidden in the Big O notation, i.e. an O(g(n)) algorithm is assumed to perform exactly g(n) operations.

Let mm be the number of operations that the computer used in the contest4 can run in one second. Suppose m=100000000 and the team is trying to solve a problem with a time limit of one second. If the team can devise an algorithm of type t=3, i.e., a rather slow O(n4)O(n4) algorithm, but the largest nn mentioned in the problem description is just 5050, then this algorithm is actually fast enough and will get “Accepted” since 504=6250000504=6250000 is less than (or equal to) mm.

However, if for another problem also with one second time limit, the team can only devise an algorithm of type t=5, i.e. an O(n2) algorithm, but the largest n mentioned in the problem description is 10001, then this algorithm is likely not fast enough to pass the time limit and will get “Time Limit Exceeded”, since 100012=100020001100012=100020001 which is greater than mm.


Formally, given three integer parameters m (1≤m≤109), n (1≤n≤109), and t∈[1..7], decide if an algorithm of type t with time complexity as described in the table above can pass the time limit of one second, that is, performs less than (or equal to) m operations. Output “AC” (that stands for “Accepted”) if that is the case, or “TLE” (that stands for “Time Limit Exceeded”) otherwise.

###Input
The input consists of three integers in one line: m, n, and t as elaborated above.

###Output
Output a single string “AC” or “TLE” in one line as elaborated above.

https://open.kattis.com/problems/tutorial