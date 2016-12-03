#Paradox With Averages (Hard)
Note that this is a harder version of the problem averageseasy.

One well-known joke goes as follows: If a bad Computer Science student drops out of college and goes to a different college to study Economics instead, he will increase the average intelligence on both colleges.

In this problem we investigate the math behind this joke. Given the list of student IQs for both colleges, find the number of students of Computer Science that can make the joke true.

###Input
The first line of the input file contains an integer TT specifying the number of test cases. Each test case is preceded by a blank line.

Each test case looks as follows: The first line contains two positive integers NCS and NE – the number of students of Computer Science and Economics, respectively. The number of Computer Science students will be at least 2 and there will be at most 200000 students in every college.

The following lines contain a total of NCS+NE whitespace-separated positive integers giving the IQs of all the students. The first NCS students mentioned in the input are Computer Science students, the remaining ones study Economics. The IQ of some students can be as high as 100000.

###Output
For each test case output a single line with a single integer – the number of Computer Science students that would cause the funny event to happen.

https://open.kattis.com/problems/averageshard