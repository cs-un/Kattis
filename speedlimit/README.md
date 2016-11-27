#Speed Limit
Bill and Ted are taking a road trip. But the odometer in their car is broken, so they don’t know how many miles they have driven. Fortunately, Bill has a working stopwatch, so they can record their speed and the total time they have driven. Unfortunately, their record keeping strategy is a little odd, so they need help computing the total distance driven. You are to write a program to do this computation.

For example, if their log shows

|Speed in miles per hour|Total elapsed time in hours|
|---|---|
|20|2|
|30|6|
|10|7|
this means they drove 22 hours at 2020 miles per hour, then 6−2=46−2=4 hours at 3030 miles per hour, then 7−6=17−6=1 hour at 1010 miles per hour. The distance driven is then 2⋅20+4⋅30+1⋅10=40+120+10=1702⋅20+4⋅30+1⋅10=40+120+10=170 miles. Note that the total elapsed time is always since the beginning of the trip, not since the previous entry in their log.

###Input
The input consists of one or more data sets. Each set starts with a line containing an integer nn, 1≤n≤101≤n≤10, followed by nn pairs of values, one pair per line. The first value in a pair, ss, is the speed in miles per hour and the second value, tt, is the total elapsed time. Both ss and tt are integers, 1≤s≤901≤s≤90 and 1≤t≤121≤t≤12. The values for tt are always in strictly increasing order. A value of −1−1 for nn signals the end of the input.

###Output
For each input set, print the distance driven, followed by a space, followed by the word “miles”.

https://open.kattis.com/problems/speedlimit