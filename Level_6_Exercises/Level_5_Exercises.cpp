/***************************************************************************************************************
 * Level_5_Exercises.cpp                                                                                       *
 * Author: Ronan Cassidy                                                                                       *
 *                                                                                                             *
 * Purpose:                                                                                                    *
 * This file contains the various exercises and work which I have created whilst furst expanding my knowledge  *
 * of the C++ language.                                                                                        *
 *                                                                                                             *
 * Usage:                                                                                                      *
 * Run the program by executing the console application.                                                       *
 *                                                                                                             *
 * Refrences:                                                                                                  *
 * Practical C++ Programming - O'Reilly Page 94                                                                *
 *                                                                                                             *
 * Restrictions:                                                                                               *
 * - Does not have error handling for if user inputs anything other than a number.                             *
 *                                                                                                             *
 * Revision History:                                                                                           *
 * 31/05/2021 - Ronan Cassidy                                                                                  *
 *                                                                                                             *
 * Exercises:                                                                                                  *
 * 1: Write a program to find square distance between two points. Find the distance only if you want to do the *
 *    independent research needed to perform a square root in C++.                                             *
 * 2: Write a program that converts a numerical grade then print a letter from based on the table shown on     *
 *    page 94 of Practical C++ Programming.                                                                    *
 * 3: Modify previous program to print out a + or - after the letter grade based on the final digit of the     *
 *    score. (1-3 = -) (4-7 =  ) (8-0 = +)                                                                     *
 * 4: Write a program that calculates the number of quarters, dimes, nickles and pennies given an amount less  *   
 *    than $1.00.                                                                                              *
 * 5: Write a program that decides wether a given year is a leap year.                                         *   
 * 6: Write a program that given the number of hours an employee worked and their hourly wage, computes their  *  
 *    weekly pay. Count any hours over 40 as overtime at time-and-a-half.                                      *
 *                                                                                                             *
 * Notes:                                                                                                      *
 ***************************************************************************************************************/

//Using namespace
using namespace std;

//Include statements
#include <iostream>
#include <string>
#include <math.h>

//Variable Declaration
char line[100];

//Function Declaration allows definition to be written later on.
void exerciseOne();
void exerciseTwo();
void exerciseThree();
void exerciseFour();
void exerciseFive();
void exerciseSix();

//Main Method
int main()
{
    string selectionChoice;

    //Get user selection of which exercise to run.
    cout << "Please select an exercise (1-6): ";
    cin >> selectionChoice;

    //Conversion of string to integer datatype
    int selectionInt = std::stoi(selectionChoice);

    //Calls related method for exercise selected by user.
    switch (selectionInt)
    {
    case 1:
        exerciseOne();
        break;

    case 2:
        exerciseTwo();
        break;

    case 3:
        exerciseThree();
        break;

    case 4:
        exerciseFour();
        break;

    case 5:
        exerciseFive();
        break;

    case 6:
        exerciseSix();
        break;
    }


    return(0);
}


//Exercise 1: Write a program to find square distance between two points. 
//Find the distance only if you want to do the independent research needed to perform a square root in C++.
void exerciseOne()
{
    cout << "\n\nExercise One:\n";

    //Read in of first coords
    double x1, y1;
    cout << "Enter co-ords of first point (Seperated by a space):";
    cin >> x1 >> y1;
    cout << "X1:" << x1 << "  Y1: " << y1;

    //Read in second coords
    double x2, y2;
    cout << "\nEnter co-ords of second point (Seperated by a space):";
    cin >> x2 >> y2;
    cout << "X2:" << x2 << "  Y2: " << y2;

    //Calculate distance using sqrt((x1 - x2)^2 + (y1 - y2)^2) aka sqrt of a^2 + b^2
    double distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    cout << "\nThe calculated distance is " << distance;
}


//Exercise 2: Write a program that converts a numerical grade then print a 
//letter from based on the table shown on page 94 of Practical C++ Programming.
void exerciseTwo()
{
    cout << "\n\nExercise Two:\n";

    //Barrier values for grades, anything under value and above previous grade is that grade. e.g. 65 = D
    int F = 60, D = 70, C = 80, B = 90, A = 100;

    //Getting grade from user
    int grade;
    string letterGrade = "?";
    cout << "Enter numerical grade:";
    cin >> grade;

    //Using else if to ensure that it only triggers one time
    if (grade <= F) 
    {
        letterGrade = "F";
    }
    else if (grade <= D)
    {
        letterGrade = "D";
    }
    else if (grade <= C)
    {
        letterGrade = "C";
    }
    else if (grade <= B)
    {
        letterGrade = "B";
    }
    else if (grade <= A)
    {
        letterGrade = "A";
    }
    else
    {
        cout << "Error encountered";
    }

    cout << "Grade of " << grade << " is equal to " << letterGrade << "!\n";
}


//Exercise 3: Modify previous program to print out a + or - after the letter grade based on the final digit of the
//score. (1-3 = -) (4-7 =  ) (8-0 = +) 
void exerciseThree()
{
    cout << "\n\nExercise Three:\n";

    //Barrier values for grades, anything under value and above previous grade is that grade. e.g. 65 = D
    const int F = 60, D = 70, C = 80, B = 90, A = 100;
    const int MINUS = 3, NONE = 7;

    //Getting grade from user
    int grade;
    string letterGrade = "?";
    cout << "Enter numerical grade:";
    cin >> grade;

    //Using else if to ensure that it only triggers one time
    if (grade <= F)
    {
        letterGrade = "F";
    }
    else if (grade <= D)
    {
        letterGrade = "D";
    }
    else if (grade <= C)
    {
        letterGrade = "C";
    }
    else if (grade <= B)
    {
        letterGrade = "B";
    }
    else if (grade <= A)
    {
        letterGrade = "A";
    }
    else
    {
        cout << "Error encountered";
    }

    //Checking last digit of the grade for wether its a +, - or normal grade.
    int lastDigit = grade % 10;

    if (lastDigit <= MINUS && lastDigit != 0) 
    {
        //Adding symbol to string rather than setting it anew
        letterGrade += "-";
    }
    else if (grade <= NONE && lastDigit != 0) { } //No change to letterGrade string
    else
    {
        letterGrade += "+";
    }

    cout << "Grade of " << grade << " is equal to " << letterGrade << "!\n";
}


//Exercise 4: Write a program that calculates the number of quarters, dimes, nickles and pennies given an amount less
//than $1.00. 
void exerciseFour()
{
    cout << "\n\nExercise Four:\n";

}


//Exercise 5: Write a program that decides wether a given year is a leap year. 
void exerciseFive()
{
    cout << "\n\nExercise Five:\n";

}


//Exercise 6: Write a program that given the number of hours an employee worked and their hourly wage, computes their
//weekly pay. Count any hours over 40 as overtime at time-and-a-half.
void exerciseSix()
{
    cout << "\n\nExercise Sixe:\n";

}