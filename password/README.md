#Password Hacking

We all know that passwords are not very secure unless users are disciplined enough to use passwords that are difficult to guess. But most users are not so careful, and happily use passwords such as “123456”. In fact, there are lists of commonly used passwords that hackers can use for breaking into systems, and these passwords often work.
You have done a lot of hacking using such lists, and you have a good idea of how likely each password in the list is the correct one (you are very surprised by the number of people using “123456” as their passwords). You have a new account to hack, and you have decided to try each of the passwords in the list one at a time, until the correct one is found. You are absolutely sure that the account you want to hack uses a password in the given list.

What is the expected number of attempts to find the correct passwords, assuming that you try these passwords in the optimal order?

###Input
The first line of input contains a positive integer NN, the number of passwords in the list. Each of the next NN lines gives the password, followed by a space, followed by the probability that the password is the correct one. Each password consists only of alphanumeric characters and is 11 to 1212 characters long. Each probability is a real number with 44 decimal places. You may assume that there are at most 500500 passwords in the list, and that the sum of all probabilities equals 11. No two passwords in the list are the same.

###Output
Output on a single line the expected number of attempts to find the correct passwords using the optimal order. Answers within 10−410−4 of the correct answer will be accepted.

https://open.kattis.com/problems/password