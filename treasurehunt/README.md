#Treasure Hunt

Jill has created a new smartphone game that leads players to find a treasure. The app uses the phone’s GPS to determine the player’s location. The app then tells the player the direction in which to go on a route to find the treasure. When the player reaches some specific location, the app rewards the player with a (virtual) treasure.

Can you help the player determine how long it will take to find the treasure?

###Input
The first line of input contains two integers RR and CC, each between 11 and 200200, inclusive. These integers define the number of rows and columns in the playing area, respectively. The next RR lines of input describe the playing area. Each line contains exactly CC letters, and each letter defines the action to take in each location in the playing area. There are five possible letters:

N
indicates a move to the previous row,
S
indicates a move to the next row,
W
indicates a move to the previous column,
E
indicates a move to the next column, and
T
indicates the location of the treasure.
Exactly one location contains the treasure.

###Output
The player begins playing at the location in the first column of the first row. The player follows the directions at each location. If the player eventually reaches the treasure by following the directions, output a line containing an integer, the number of moves required to reach the treasure. If the directions cause the player to leave the playing area, output a line containing the word Out. If the directions cause the player to stay in the playing area but never reach the treasure, output a line containing the word Lost.

https://open.kattis.com/problems/treasurehunt