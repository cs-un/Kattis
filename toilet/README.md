# Toilet Seat
Many potential conflicts lurk in the workplace and one of the most sensitive issues involves toilet seats. Should you leave the seat “up” or “down”? This also affects productivity, particularly at large companies. Hours each week are lost when employees need to adjust toilet seats. Your task is to analyze the impact different bathroom policies will have on the number of seat adjustments required.

The classical assumption is that a male usually uses a toilet with the seat “up” whereas a female usually uses it with the seat “down”. However, we will divide the population into those who prefer the seat up and those who prefer it down, regardless of gender.

Now, there are several possible policies that one could use, here are a few:

When you leave, always leave the seat up
When you leave, always leave the seat down
When you leave, always leave the seat as you would like to find it
So, a person may have to adjust the seat prior to using the toilet and, depending on policy, may need to adjust it before leaving.

### Task
Your task is to evaluate these different policies. For a given sequence of people’s preferences, you are supposed to calculate how many seat adjustments are made for each policy.

### Input
The first and only line of input contains a string of characters ’U’ and ’D’, indicating that a person in the sequence wants the seat up or down. The string has length at least 2 and at most 1000.

The first character indicates the initial position of the toilet seat, and the following n−1 characters indicate how a sequence of n−1 people prefer the seat. You should compute the total number of seat adjustments needed for each of the three policies described above.

### Output
Output three numbers, each on a separate line, the total number of seat adjustments for each policy.

https://open.kattis.com/problems/toilet