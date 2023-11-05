Aadhi is designing a lottery game application. The application generates lucky numbers for each participant and checks whether the numbers are lucky or not. A lucky number is defined as a number that does not contain any repeated digits. For example, 123 is a lucky number, but 112 is not.


// To implement the lucky number checking functionality, he has created the class LuckyChecker. This class has a dynamic constructor that takes an array of numbers and their size as input and dynamically allocates memory to store these numbers. The class also provides a method isLucky(int num) that checks whether a given number is lucky or not. Write a program to accomplish this task.


// Note: This kind of question will help in clearing Wipro recruitment.
// Input format :

// The first line consists of an integer 'n' that represents the number of participants.

// The second line represents n integers that represents the lottery numbers.
// Output format :

// The output displays whether the given number is a lucky number or not in separate lines.


// Refer to the sample output for formatting specifications.
// Code constraints :

// 1<=n<=100

// lottery numbers<1000
// Sample test cases :
// Input 1 :

// 3
// 121 123 234

// Output 1 :

// 121 is not Lucky 
// 123 is Lucky 
// 234 is Lucky 

// Input 2 :

// 5
// 545 632 783 944 385

// Output 2 :

// 545 is not Lucky 
// 632 is Lucky 
// 783 is Lucky 
// 944 is not Lucky 
// 385 is Lucky 