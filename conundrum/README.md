#Cryptographer's Conundrum

The walls of the corridors at the Theoretical Computer Science group (TCS) at KTH are all but covered with whiteboards. Some of the faculty members are cryptographers, and like to write cryptographic puzzles on the whiteboards. A new puzzle is added whenever someone discovers a solution to the previous one.

When Per walked in the corridor two weeks ago, he saw that the newest puzzle read “GuvfVfNGrfg”. After arriving at his computer, he quickly figured out that this was a simple ROT13 encryption of “ThisIsATest”.

The series of lousy puzzles continued next week, when a new puzzle read
“VmkgdGFyIHPDpGtlcmhldGVuIHDDpSBzdMO2cnN0YSBhbGx2YXIK”. This was just base64-encoded text! “Enough with these pranks”, Per thought; “I’m going to show you!”

Now Per has come up with a secret plan: every day he will erase one letter of the cipher text and replace it with a different letter, so that, in the end, the whole text reads “PerPerPerPerPerPerPer”. Since Per will change one letter each day, he hopes that people will not notice.

Per would like to know how many days it will take to transform a given cipher text into a text only containing his name, assuming he substitutes one letter each day. You may assume that the length of the original cipher text is a multiple of 33.

For simplicity, you can ignore the case of the letters, and instead assume that all letters are upper-case.

###Input
The first and only line of input contains the cipher text on the whiteboard. It consists of at most 300300 upper-case characters, and its length is a multiple of 33.

###Output
Output the number of days needed to change the cipher text to a string containing only Per’s name.