#Beehives

Bill the beekeeper has a problem! His bees like to fight with each other instead of producing honey. If the bees fight each other, then the honey turns out sour. The only way to stop the bees from fighting and keep the honey sweet is to ensure that the hives are not too close together. Help Bill figure out how many of this season’s hives will produce sour honey.
Bill’s hives all exist on a plane, and he knows some distance d such that two hives within dd of each other will fight, and both will produce sour honey. If a hive does not fight with any other hives, it produces sweet honey. Given dd and the positions of NN beehives, output how many hives will produce sweet honey and how many hives will produce sour honey.

###Input
Input will be provided on multiple lines. There may be up to 1010 test cases in the input. Each case will begin with a floating point number dd (0<d<10000<d<1000), the distance within which hives will fight, followed by an integer NN (1≤N≤1001≤N≤100), the number of hives in that case. The next NN lines will contain two floating point numbers separated by a single space, xx and yy (−1000≤x,y≤1000−1000≤x,y≤1000), which give the position of each hive. No two hives will be at the exact same location. Input will be terminated by a line containing the string 0.0 0.

###Output
For each case output a line of the following form: a sour, b sweet where aa and bb are the number of hives producing sour and sweet honey, respectively.

https://open.kattis.com/problems/beehives