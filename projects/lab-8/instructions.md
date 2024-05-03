# Lab 8
### The Birthday Baffler

**_Objective:_**
To write a program with:

+ switch-case construct for the months and days tables of data
+ conditional testing for the leap year section
+ correct use of a variety of mathematical operators (i.e. your answers are right)

**_Assignment:_**

To determine which day of the week you were born on.  Even if your parents don't remember, there's a way to find out.  Just use the directions below.  *_This method is guaranteed to work for any date between 1752 and 2099._*  

`After each step is an example using Lincoln’s birthday: February 12, 1809.`

**1)**    Start by verifying that your input contains valid information (month and day are realistic, year is between 1752 and 2099). Display "This is an invalid date." if applicable  `2 and 12 are realistic, 1809 is a valid year.`

**2)**    Determine the first two digits of the century (1700, 1800, 1900 or 2000) your birthday is in, then take the remainder of the number when divided by 4, subtract that number from 3, and then multiply it by 2.  
`The year is 1809 so take the first two digits (18), get the remainder when 18 is divided by 4 (2), subtract that from 3 (1) and multiply by 2 (2).`

**3)**    Take the last two digits of the year in which you were born.   
`09`

**4)**    Divide the above number by 4, dropping the remainder if there is one.  
`9 / 4 = 2`

**5)**    Determine if your birth year is a leap year. 

To maintain our calendar system, certain years are designated as leap years and have an extra day at the end of February, for a total of 366 days.  The basic rule says that a leap year occurs every year that is a multiple of four.  However, century years—like 1800 and 1900—generally are not leap years.  But this rule, too, has an exception: any year divisible by 400 is a leap year.

`1809 is not a leap year.`

**6)**    Find the number associated with the month in which you were born in the Table of Months below. **(Use a switch case)**  
`4 from February`

| Month | Value |
| --- | --- |
| January | 1 (0 in leap year) |
| February | 4 (3 in leap year) |
| March | 4 |
| April | 0 |
| May | 2 |
| June | 5 |
| July | 0 |
| August | 3 |
| September | 6 |
| October | 1 |
| November | 4 | 
| December | 6 |

**7)**    On which **day** of the month is your birthday?  
`12`

**8)**    Find the sum of the five numbers obtained in steps 2, 3, 4, 6 and 7. 

`2 + 9 + 2 + 4 + 12 = 29`

**9)**    Divide the sum by the number 7.  The day that corresponds to the **remainder** in the Table of Days (below) is the day of the week you were born on. **(Use a switch case)**  
`The remainder of 29 / 7 is 1 so Sunday.`

| Remainder | Day |
| --- | --- |
| 1 | Sunday |
| 2 | Monday |
| 3 | Tuesday |
| 4 | Wednesday |
| 5 | Thursday |
| 6 | Friday |
| 0 | Saturday |
 

**_Sample Runs_** (This shows the program was run five times. Yours doesn't need to repeat):	

![Lab8sampleruns](https://cdn.jsdelivr.net/gh/0x6a69616e/cpp-course-3720/projects/lab-8/Lab8sampleruns.png)

Check the scoring guide to make sure you have satisfied the lab requirements before submitting your work. Remember that passing the tests here does not guarantee a perfect score!


**_Reference Documents Used:_** Switch Case

