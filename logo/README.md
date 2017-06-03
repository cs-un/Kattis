# Logo
Logo is a programming language built around a turtle. Commands in the language cause the turtle to move. The turtle has a pen attached to it. As the turtle moves, it draw lines on the page. The turtle can be programmed to draw interesting pictures.

We are interested in making the turtle draw a picture, then return to the point that it started from. For example, we could give the turtle the following program:

fd 100 lt 120 fd 100 lt 120 fd 100

The command fd causes the turtle to move forward by the specified number of units. The command lt causes the turtle to turn left by the specified number of degrees. Thus the above commands cause the turtle to draw an equilateral triangle with sides 100 units long. Notice that after executing the commands, the turtle ends up in the same place as it started. The turtle understands two additional commands. The command bk causes the turtle to move backward by the specified number of units. The command rt causes the turtle to turn right by the specified number of degrees.

After executing many commands, the turtle can get lost, far away from its starting position. Your task is to determine the straight-line distance from the turtle’s position at the end of its journey back to the position that it started from.

### Input
The first line of input contains one integer specifying the number of test cases to follow. Each test case starts with a line containing one integer, the number of commands to follow. All distances and degrees are integers. The commands follow, one on each line. Each test case will contain no more than 1000 commands.

### Output
For each test case, output the distance from the starting position to the final position, rounded to the nearest integer.

https://open.kattis.com/problems/logo