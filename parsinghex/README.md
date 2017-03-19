# Parsing Hex
This problem is simple. Just search the input for hexadecimal numbers, and print any numbers you find in both hexadecimal and decimal format.

### Input
Input is a sequence of at most 100 text lines, ending at end of file. Each line has at most 100 characters, and may contain one or more hexadecimal numbers. No hexadecimal number spans multiple lines. A hexidecimal number begins with ‘0x’ or ‘0X’ (that’s a number zero followed by a letter x), followed by a string of hexadecimal digits (0-9, a-f, or A-F). A hexadecimal number should be as long as possible, but no hexadecimal number in the input is greater than 0xffffffff. No two hexadecimal numbers are adjacent on any line.

### Output
For each hexadecimal number (in the order they appear in the input), print a line containing the hexadecimal number as it appeared in the input and its non-negative decimal equivalent.

https://open.kattis.com/problems/parsinghex