#Text Encryption
To keep privacy of messages and prevent the aliens from reading them, we may use various encryption algorithms. These algorithms encode a message into the so-called ciphertext that is difficult (or impossible) to decode for anyone else than the intended recipient. Transposition ciphers are a type of encryption that do not change the letters of the message but only change their order (“shuffle” the letters). Of course, the shuffling must be reversible to allow later decryption.

In this problem, we will consider a simple transposition cipher which shuffles the letters in such a way that the decryption algorithm always takes every nn-th letter. More specifically: when decrypting, the first letter of the ciphertext is taken first, then the next n−1n−1 letters are (repeatedly) skipped and the next letter taken, and so on until we reach the end of the ciphertext. After that, we repeat the procedure starting with the second letter of the ciphertext, and so on until all letters are used.

Your task is to implement the encryption algorithm for this cipher. For a given message, produce the encrypted text (ciphertext). To make the cipher a little bit stronger, you should convert all letters to uppercase and leave out all spaces between words.

###Input
The input contains at most 150150 messages. Each message is described by two lines. The first line contains one integer number NN (1≤N≤1 0001≤N≤1 000). The second line contains the message. The message will be at most 10 00010 000 characters long, it will only contain letters and spaces, and there will be at least one letter in each message.

The last message is followed by a line containing zero.

###Output
For each message, output the ciphertext that, after using the described decryption algorithm, will result in the original message (with all spaces removed and all letters in uppercase).

https://open.kattis.com/problems/textencryption