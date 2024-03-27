# Lab 6
### Five-Babbage Burgers and Fries

**_Objective:_**
To write a program which utilizes:

 + a `for` loop
 + a summing variable (totaler)
 + appropriate output formatting

**_Assignment:_**

Employees at Five-Babbage Burgers and Fries are paid $7.72 per hour.  Of each employee’s paycheck, 33% is withheld for Uncle Sam (taxes). Note this is not exactly the same as 1/3.  Write a program that asks the user how many hours they worked and responds with the user’s take-home pay for the week. 

Next, modify the program so that it asks the user how many weeks are in the given pay-period, followed by that number of hourly inputs.  The program should print the take-home pay for each of the weeks, then display the total for the pay period.  Finding the total will require summing the weekly pay each time you go through the loop.  Remember the total is zero to begin with.

Also, make the program output an appropriate message at the end of its run.  Output must look exactly as you see it below, including spacing. 

**_Sample Run:_**	
![Lab6samplerun](assets/Lab6samplerun.png)

_Note:_  Your total pay may not add precisely to the total of the individual weeks due to rounding errors.

**_Hints:_**
+ The structure of `for` loops is explained in the first page of the Loops reference document. The other types of loops described in the document are not used in this lab.
+ As you did in Lab 5, use the code below, with header file iomanip (`#include <iomanip>`) to format to 2 decimal places:
```
cout << setiosflags(ios_base::fixed)  	 
     << setiosflags(ios_base::showpoint) 	
     << setprecision(2);          	  	
 ```

_Note:_  Baggage Burgers is named after the famous computer scientist [Charles Babbage](https://en.wikipedia.org/wiki/Charles_Babbage).

Check the scoring guide to make sure you have satisfied the lab requirements before submitting your work. Remember that passing the tests here does not guarantee a perfect score!

**_Reference Documents Used:_** Loops; Totalers; Variables Input and Output Formatting