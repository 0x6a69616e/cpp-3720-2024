# Lab 7
### Five-Babbage Burgers and Fries, Inc.

**_Objective:_**
 To write a program with:

+ a simple menu using `char` variables and the `do-while` construct
+ a `while` loop that runs until all employees are paid


**_Assignment:_**

Remember Five-Babbage Burgers and Fries from Lab 6? Well, Five-Babbage Burgers and Fries, Inc. employs a variety of people in many different capacities.  There are counter workers, managers, cooks and dishwashing staff.  Each one has a different salary and compensation package. You are going to calculate their **weekly paychecks**.

+ Counter staff are paid at the rate of $10.50 per hour.
+ Kitchen Cooks are paid at the rate of $15.75 per hour.
+ Dishwashers are paid at the rate of $10.50 per hour.
+ Managers are salaried employees that make $48,000 _annually_.

Each hourly employee’s paycheck has 28% withheld for Uncle Sam (taxes) and salaried employees have 33% withheld.  

Write a program that will loop until all employees in the company have been paid.  This means asking the user if they are finished or need to continue. Each time through the loop a menu prompts the user asking what type of employee they are calculating the salary for and, *if appropriate*, how many hours they worked.  The program should then respond with the user’s name and take-home pay for the week.

Here is what the menu should look like:
![Lab7menu](https://cdn.jsdelivr.net/gh/0x6a69616e/cpp-course-3720/projects/lab-7/Lab7menu.png)

The user will select **A, K, D or M**  and then ask for the number of hours (decimals are allowed) and correctly calculate the paycheck corresponding to the appropriate staff’s pay and display it: Name followed by their pay.

If the user enters anything other than one of the above menu options the menu should be shown again until the user enters a valid option. The program should quit when the user decides there are no more employees to pay.

**_Hint:_**
A `while` loop should be used to make the program run until you are out of employees to pay. To make the program repeat the menu until the user chooses a valid char-type menu option, use a `do-while` loop.  Then use a nested `if-else` to decide what to do. 


**_Sample Run:_**	
![Lab7samplerun1](https://cdn.jsdelivr.net/gh/0x6a69616e/cpp-course-3720/projects/lab-7/Lab7samplerun1.png)
![Lab7samplerun2](https://cdn.jsdelivr.net/gh/0x6a69616e/cpp-course-3720/projects/lab-7/Lab7samplerun2.png)


Check the scoring guide to make sure you have satisfied the lab requirements before submitting your work. Remember that passing the tests here does not guarantee a perfect score!

**_Reference Documents Used:_** Loops; Menus; If Else