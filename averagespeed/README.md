# Average Speed
You have bought a car in order to drive from Waterloo to a big city. The odometer on their car is broken, so you cannot measure distance. But the speedometer and cruise control both work, so the car can maintain a constant speed which can be adjusted from time to time in response to speed limits, traffic jams, and border queues. You have a stopwatch and note the elapsed time every time the speed changes. From time to time you wonder, “how far have I come?”. To solve this problem you must write a program to run on your laptop computer in the passenger seat.

### Input
Standard input contains several lines of input (at most 100): Each speed change is indicated by a line specifying the elapsed time since the beginning of the trip (in the format “hh:mm:ss”), followed by the new speed in km/h (an integer between 0 and 1000, inclusive). Each query is indicated by a line containing the elapsed time. At the outset of the trip the car is stationary. Elapsed times are given in non-decreasing order and there is at most one speed change at any given time.

### Output
For each query in standard input, you should print a line giving the time and the distance travelled rounded to exactly two digits after the decimal point, in the format below. (You may assume that the distance travelled is at least 10^-6 away from any number that would be rounded differently.)

https://open.kattis.com/problems/averagespeed