#Just a Minute

The city’s local subway service S.L., Super Lag, are currently being blamed that their displays, showing the expected wait time until the next train arrives, are faulty. Too many commuters have the experience of coming to the subway station, and then having to wait many more minutes than the display showed when they got there.
The American Commuter Movement and the International Commuting Peoples’ Community have had it with this. Especially Johan, a young student, who has decided to investigate this matter further. Johan went to one of the stations, and studied the behaviour of the displays. Each time the display showed a new number, Johan carefully measured the number of seconds that passed from that moment until the train arrived. As soon as that train left again, he did the same thing for the next train and so on. He remembered all the displayed minutes, and the wait time for each such in seconds. Although Johan has a very good memory, he does not know what to do with his measurements. He needs your help!

Your task is to help Johan calculate the average length of an S.L. minute (the length of a minute according to the display). You may assume that when the display shows a new number MM, the expected S.L. wait time in that moment is exactly MM minutes.

###Input
The first line contains an integer 1≤N≤10001≤N≤1000 – the number of observations Johan did. The following NN lines contain two positive integers M≤60M≤60 and S≤3600S≤3600 – the number of minutes displayed, and the number of seconds Johan had to wait for his train.

###Output
Output should consist of a single real number: the average length of an S.L. minute, measured in real minutes. A relative or absolute error of at most 10−710−7 will be considered correct. If the average length of an S.L. minute is shorter than or equal to a normal minute, print the message "measurement error" instead.

https://open.kattis.com/problems/justaminute