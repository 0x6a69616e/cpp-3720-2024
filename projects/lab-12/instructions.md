# Lab 12
### Email Address

**_Objective:_**

To manipulate strings using the operations of reading, size checking, and searching.

**_Assignment:_**

Before starting, examine the reference document to learn about the string class.  You will use the functions you find in that document.

An Internet address (e.g., `bob@lan.lhs.edu`) is made up of several parts.  In general, the part before the @ is the name or ID of a particular user, and the part after the @ specifies the site at which the user is located.  For most sites, the last three letters describe the site’s type:
+ `edu` - Educational institutions
+ `org` - Not-for-profit organizations
+ `gov` - Government entities
+ `mil` - Military installations
+ `net` - Network service providers
+ `com` - Commercial ventures
 
Some Internet addresses end in a two-letter code specifying the country (e.g., `fr` for France).  

Write a **separate function** to find these domain codes by locating the last dot in the string. 
 For example, the domain name in the address, `rleblanc@sch.ci.lexington.ma.us`, is `us`.

Write a program, containing at least **3 functions** (other than main), that will ask the user for their email address and print out the following:
+ The user's name or ID
+ The user's character site type. Display the specific name for all 3-character site types. For 2-character site types, display "Country code" (you do not need to identify which country).
 
 
**_Sample Runs_** (this shows the program was run twice):	
![Lab12sampleruns](https://cdn.jsdelivr.net/gh/0x6a69616e/cpp-course-3720/projects/lab-12/Lab12sampleruns.png)

Check the scoring guide to make sure you have satisfied the lab requirements before submitting your work. Remember that passing the tests here does not guarantee a perfect score!


**_Reference Documents Used:_** Strings