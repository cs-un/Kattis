#Guess the Number
I am thinking of a number between 11 and 10001000, can you guess what number it is? Given a guess, I will tell you whether the guess is too low, too high, or correct. But I will only give you 1010 guesses, so use them wisely!

Interaction
Your program should output guesses for the correct number, in the form of an integer between 11 and 10001000 on a line on its own. After making each guess, you need to make sure to flush standard out.

After each guess, there will be a response to be read from standard in. This response is a line with one of the following three words:

“lower” if the number I am thinking of is lower than your guess
“higher” if the number I am thinking of is higher than your guess
“correct” if your guess is correct
After having guessed the right answer your program should exit. If you guess incorrectly 1010 times, you won’t get any more chances and your program will be terminated.

https://open.kattis.com/problems/guess