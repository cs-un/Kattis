# Popular Vote

In an election with more than two candidates, it is often the case that the winner (the candidate receiving the most votes) receives less than the majority of the votes. Given the results of an election, can you determine the winner, and whether the winner received more than half of the votes?

### Input
The first line of input contains a single positive integer T≤500 indicating the number of test cases. The first line of each test case also contains a single positive integer n indicating the number of candidates in the election. This is followed by n lines, with the ith line containing a single nonnegative integer indicating the number of votes candidate i received.

There are at least 2 and no more than 10 candidates in each case, and each candidate will not receive more than 50000 votes. There will be at least one vote cast in each election.

### Output
Provide a line of output for each test case. If the winner receives more than half of the votes, print the phrase majority winner followed by the candidate number of the winner. If the winner does not receive more than half of the votes, print the phrase minority winner followed by the candidate number of the winner. If a winner cannot be determined because no single candidate has more vote than others, print the phrase no winner. The candidate numbers in each case are 1,2,…,n

https://open.kattis.com/problems/vote