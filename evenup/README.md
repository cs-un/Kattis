#Even Up Solitaire
The Even Up Solitaire can be played with a stack of cards each having a numerical value from 1 to 100. The cards are laid out from left to right in a row. At every step, the player is allowed to remove two adjacent cards if the sum of their values is even. The gap is then “closed” by shifting the cards to the right of the gap. The order of the remaining cards is not changed. The game stops when all cards are removed or when no more cards can be removed. The player wins when all cards are removed. If this is not possible, the player should try to minimize the number of cards remaining.

You are given the initial list of cards, in left-to-right order. Determine the minimum number of cards that remain if the player moves optimally.

###Input
The input consists of one case. The first line contains an integer nn (1≤n≤1000001≤n≤100000) giving the number of cards to follow. The second line contains nn integers indicating the card values from left to right. Each card value is in the range 1 to 100.

###Output
Print the minimum number of cards that remain if the player moves optimally.

https://open.kattis.com/problems/evenup