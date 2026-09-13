# Grade-Evaluator
A simple C++ console program that takes a letter grade (A–F) and prints feedback for it. Built while practicing switch statements.
What it does

The program asks the user to enter a single letter grade, then uses a switch statement to print a matching comment:

Grade	Feedback
A	Outstanding work! Excellent
B	Very Good
C	Solid Effort
D	You passed
E	Fairly Passed
F	Failed
Anything else	Enter a valid grade (A-F)
Concepts practiced
switch statements with multiple case labels
break to prevent fall-through between cases
default case for handling invalid input
Reading a char with cin
Possible improvements
Currently the switch is case-sensitive — entering a lowercase a falls into default instead of matching 'A'. Converting the input to uppercase first (or adding lowercase cases) would fix this.
Add a loop so the user can check multiple grades without restarting the program.

AUTHOR
MICHAEL TERTSUA
