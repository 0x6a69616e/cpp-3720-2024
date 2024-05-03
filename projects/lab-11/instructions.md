# Lab 11
### Miniature Golf
**_Objective:_**
+ To learn about one-dimensional arrays of fixed length 
+ To learn about the string function called `getline`
+ To practice I-P-O (input-process-output) formatting.

**_Assignment:_**. Write a program that:
+ Contains 3 functions other than the main
+ Uses a **one-dimensional array**
+ Asks the user for their full name and the number of strokes taken on each hole of an 18-hole miniature golf course
+ Calculates the final score and how many holes-in-one the player had (holes with 1 stroke)
+ Prints out a scorecard

When you pass your array it is always passed as a reference parameter, even if you are not changing its contents.  Just be careful that you are not accidentally making any modifications. You can prevent it from being modified using `const`, but that’s not necessary in this class.

**_Sample Run:_** 

*The output for your scorecard should look just like what you see below, with proper spacing and alignment. I have skipped many lines of input in the ... to save space*

![Image alt text](https://cdn.jsdelivr.net/gh/0x6a69616e/cpp-course-3720/projects/lab-11/lab11samplerun.png)

**_Hints:_** (see reference documents listed below for more details)

+ The field width manipulator `setw(3)` (found in the header file `iomanip`) will right-justify the number that follows in a field 3 characters wide.
  
+ `for` loops are helpful when working with arrays,  especially those of more than three elements. 

+ Use `getline()` to read in words and spaces as strings. You will need this to input “Tiger Woods” or “Tiger E Woods” or whatever name the user chooses to input when they use your program!

Check the scoring guide to make sure you have satisfied the lab requirements before submitting your work. Remember that passing the tests here does not guarantee a perfect score!


**_Reference Documents Used:_** Strings, One Dimensional Arrays and Vectors, Variables Input Output and Formatting

