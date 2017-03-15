# Doorman


The doorman Bruno at the popular night club Heaven is having a hard time fulfilling his duties. He was told by the owner that when the club is full, the number of women and men let into the club should be roughly the same. When the night club opens, people wanting to enter the club are already lined up in a queue, and Bruno can only let them in one-by-one. He lets them in more-or-less in the order they are lined up. He can however decide to let the second person in the queue cut the line and slip into the club before the person in front. This will no doubt upset the person first in line, especially when this happens multiple times, but Bruno is quite a big guy and is capable of handling troublemakers.

Unfortunately though, he is not that strong on mental calculations under these circumstances. He finds keeping track of the difference of the number of women and number of men let into the club a challenging task. As soon as the absolute difference gets too big, he loses track of his counting and must declare to the party people remaining in the queue that the club is full.

### Input
The first line of input contains a positive integer X<100 describing the largest absolute difference between the number of women and number of men let into the club that Bruno can handle.

The second line contains a string consisting solely of the characters ’W’ and ’M’ of length at most 100, describing the genders of the people in the queue, in order of their arrrival. The leftmost character of the string is the gender of the person first in line.

You may assume that the club is large enough to hold all the people in the queue.

### Output
The maximum number of people Bruno can let into the club without losing track of his counting.

https://open.kattis.com/problems/doorman