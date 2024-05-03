# Lab 5
### Slope

**_Objective:_**
To write a program with:
+ calculations using analytic geometry
+ an efficient if-else construct (the order of the testing should be considered)

**_Assignment:_**
The slope *m* of the line between the two points (*x*1, *y*1) and (*x*2, *y*2) is given by the formula:

![Lab5formula](https://cdn.jsdelivr.net/gh/0x6a69616e/cpp-course-3720/projects/lab-5/Lab5formula.png)
		
**_Part 1:_**  Write a program that will ask the user for the coordinates of two points and do the following:

+ Determine if the two points form a line.
+ Detect if the line is horizontal and alert the user.
+ Detect if the line is vertical and alert the user.
+ Calculate the slope of the line segment connecting them, if not 0 or undefined. (*note:* do not allow your program to try to divide by zero!)

Use double-type variables for storing the coordinates and calculations made from them (avoids integer division issues). 

**_Part 2:_**  Modify the program to print the equation of the line in slope-intercept form (*y=mx+b*). Use the appropriate *“y = ”* and *“x = ”* for horizontal and vertical lines, respectively. 

When you run your program, your output should look like the sample runs below when the numbers shown in bold are entered by the user. These are just a few examples, be sure to test other values too.

**_Sample Runs:_** (The code was run four times, your program does not need to repeat)

![Lab5samplerun1](https://cdn.jsdelivr.net/gh/0x6a69616e/cpp-course-3720/projects/lab-5/Lab5samplerun1.png)

![Lab5samplerun2](https://cdn.jsdelivr.net/gh/0x6a69616e/cpp-course-3720/projects/lab-5/Lab5samplerun2.png)

![Lab5samplerun6](https://cdn.jsdelivr.net/gh/0x6a69616e/cpp-course-3720/projects/lab-5/Lab5samplerun6.png)

![Lab5samplerun5](https://cdn.jsdelivr.net/gh/0x6a69616e/cpp-course-3720/projects/lab-5/Lab5samplerun5.png)



Make sure to include the equations of both the vertical and horizontal lines, as well as the lines that have finite non-zero slope.

**_Hint:_**
To format a variable to two decimal places, include the header file iomanip (`#include <iomanip>`) at the top of your code and use these `cout` class manipulators:
```
cout << setiosflags(ios_base::fixed)  	 
     << setiosflags(ios_base::showpoint) 	
     << setprecision(2);          	  	
 ```
Placing the above code at the beginning of your program, within the curly brackets of `int main()`, forces the formatting to occur throughout the running of your program. The first line says to not use E notation, the second line says to always show a decimal point, and the last line rounds to 2 decimal places.
 
Run the tests and check the scoring guide to make sure you have satisfied the lab requirements before submitting your work. Remember that passing the tests here does not guarantee a perfect score!

**_Reference Documents Used:_** If-else; Variables Input and Output Formatting. 