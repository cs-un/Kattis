#Mastering Mastermind
Mastermind is a two-person code breaking game which works as follows. The first person (the code maker) creates a sequence of nn colored pegs (with duplicate colors allowed) and hides it from view. This sequence of pegs is the code.

The second person (the code breaker) has the job of trying to determine the code maker’s code and she does so by making a series of guesses. Each guess also consists of nn colored pegs. After each guess, the code maker gives the code breaker feedback about how close she is. This feedback consists of two number rr and ss, where

r=r= the number of pegs that are identical in both color and position in the code and the guess, and
s=s= the number of remaining pegs that are identical in color but not in the same position.
For example, if the code is BACC (where we use different letters to represent colors) and the guess is CABB, then r=1r=1 (the A in the second position of both the code and the guess) and s=2s=2 (a B and C in the remaining three characters). Note that only one of the B’s in the guess will “match” with the single B in the code: once pegs in the code and the guess have been “matched” with each other, they can’t be matched with any other pegs.

Your job in this problem is to determine rr and ss given a code and a guess.

###Input
The input is a single line containing a positive integer n≤50n≤50 (the length of the code) followed by two strings of length nn — the first of these is the code and the second is the guess. Both code and guess are made up of upper-case alphabetic characters.

###Output
Output the values of rr and ss for the given input.

https://open.kattis.com/problems/mastermind