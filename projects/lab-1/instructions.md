# Lab 1
### Hello, World!!
 
**_Objective:_** To get acquainted with the C++ editor and the structure of simple programs.
 
**_Assignment:_**
+ Fill in your name and block in the header of the main.cpp file (on the left) 
+ Carefully **read through the explanations (below)** of each line of code. 
+ When you're done reading, run the program (button at the top) and see what is displayed in the Console on the right side
  + Remember, you can always return to this instruction sheet by selecting the Instructions tab near the top right
+ Now, **edit the program by REPLACING line 11** with:
```
    int i, j;
    cout << "Enter your two favorite numbers: ";
    cin >> i >> j; 
```
+ Rerun the program.  You now have the option of telling the program your favorite numbers by typing into the Console.  The `cin` object is used for getting information from the Console and storing it in variables for the computer to use. The user can put a space or hit enter between the inputs.
+ Test your code by clicking the checkmark on the far left side and clicking Run Tests
  + If it doesn't say Passed, look at the results to see if you notice what's wrong. If you're not sure, ask for help!
+ Check the Scoring Guide (under Files on the left) to make sure you have completed all the requirements of the lab (this is something you should do for every lab)
+ Submit your work by clicking the button at the top right

***
## Explanations
**Lines 1-3:** Comment lines. A double slash (`//`) causes the compiler to ignore the rest of the line.  *Note:* You will have a similar header for every lab!  Alternatively, anything between `/*` and `*/` will be ignored as well (seen in lines 5, 10, and 13). These comments are used for the programmer and reader's convenience. 

**Line 6:** This is a compiler directive—an instruction to the C++ compiler, not a C++ command proper.  The `#include` directive tells the compiler to insert or “include” some code found in another file.  Many C++ commands and “objects” require that the programmer include certain header files in order for them to work.  `cout`, for example, requires the file `iostream`.

**Line 9:** When the C++ compiler runs a program, the first thing it does is look for the function called `int main()`.  The statements in main are executed sequentially; the program run ends when the compiler reaches the end of the function.  Every C++ program must have a main function.  The int is standard for C++ and indicates that the function returns an integer value (satisfied later in line 17). 
The left brace (`{`) indicates the start of the block of instructions making up the function.

**Line 11:** These are variable declarations.  This line declares two integer variables, named `i` and `j`, and initializes their values to 1 and 2, respectively.  Note the semicolon at the end, which ends the command.

**Line 14:** The `cout` object is used for displaying text (`Hello, World!`) on the screen and to go to the next line (`endl`).

**Line 15:** `cout` is used here to display the values of the two variables.

**Line 17:** `return 0` to satisfy line 9 (returning an integer). However, many compilers (including Replit) will be okay with omitting this command.

**Line 18:** The right brace (`}`) closes (i.e., ends) the function.

