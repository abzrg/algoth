For problems involving data structures that are difficult to build by hand, I may start by reading the input. Otherwise, I tend to save that code for last. The reason for this is that we can generally test the functions we're writing by calling them with sample values; there is no need to worry about parsing the input until we’re ready to solve the whole problem. -- algorithmic thinking book

---

If you want to test your code locally before submitting it to the judge, then you have a few options. Since our programs read from standard input, one thing you can do is run the program and type a test case by hand. That's a reasonable thing to do for small test cases, but it's tedious doing that over and over and especially for large test cases. A better option is to store the input in a file and then use input redirection from the command prompt to have the program read from that file instead of the keyboard.
