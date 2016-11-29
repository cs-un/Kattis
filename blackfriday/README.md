#Black Friday

Black Friday is the Friday following Thanksgiving Day in the United States (the fourth Thursday of November). Since the early 2000s, it has been regarded as the beginning of the Christmas shopping season in the US, and most major retailers open very early and offer promotional sales. (Source: Wikipedia)

You work in the IT support division of an electronics store. This year, in an attempt to prevent overcrowding, the management has decided to limit the number of people entering the store. They divide the people at the entrance into groups of size nn and process them as follows: all nn participants roll a die, and report the outcomes a1,a2,…,ana1,a2,…,an. To prevent cheating, instead of selecting the one with the highest outcome, the rule is to select the participant with the highest unique outcome. Everybody not selected has to move to the back of the queue. If there is no winner, the experiment is repeated.

For example, if there are three players and the outcomes are 6, 6 and 5, then the third player wins, because the first and second player lose even though their outcomes are higher, since they both have the same outcome. If instead the third player also rolls 6, then nobody wins.

They asked you to write a program for selecting the winner.

###Input
The first line of the input contains one integer nn, 1≤n≤1001≤n≤100, the group size. The second line contains nn integers a1,a2,…,ana1,a2,…,an (1≤ai≤61≤ai≤6 for all 1≤i≤n1≤i≤n): the outcome of each participant’s die roll.

###Output
Output the index of the participant that has the highest unique outcome, or “none” (without the quotes) if nobody has a unique outcome.

https://open.kattis.com/problems/blackfriday