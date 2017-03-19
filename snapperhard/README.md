# Snapper Chain (Hard)
Note that this is a harder version of the problem snappereasy

The Snapper is a clever little device that, on one side, plugs its input plug into an output socket, and, on the other side, exposes an output socket for plugging in a light or other device.

When a Snapper is in the ON state and is receiving power from its input plug, then the device connected to its output socket is receiving power as well. When you snap your fingers – making a clicking sound – any Snapper receiving power at the time of the snap toggles between the ON and OFF states.

In hopes of destroying the universe by means of a singularity, I have purchased N Snapper devices and chained them together by plugging the first one into a power socket, the second one into the first one, and so on. The light is plugged into the Nth Snapper.

Initially, all the Snappers are in the OFF state, so only the first one is receiving power from the socket, and the light is off. I snap my fingers once, which toggles the first Snapper into the ON state and gives power to the second one. I snap my fingers again, which toggles both Snappers and then promptly cuts power off from the second one, leaving it in the ON state, but with no power. I snap my fingers the third time, which toggles the first Snapper again and gives power to the second one. Now both Snappers are in the ON state, and if my light is plugged into the second Snapper it will be on.

I keep doing this for hours. Will the light be on or off after I have snapped my fingers K times? The light is on if and only if it’s receiving power from the Snapper it’s plugged into.

### Input
The first line of the input gives the number of test cases, T. T lines follow. Each one contains two integers, N and K.

You may assume that 1≤T≤10000, 1≤N≤30 and 0≤K≤108.

### Output
For each test case, output one line containing “Case #x: y”, where x is the case number (starting from 1) and y is either "ON" or "OFF", indicating the state of the light bulb.

https://open.kattis.com/problems/snapperhard