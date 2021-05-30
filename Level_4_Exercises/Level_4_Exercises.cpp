/***************************************************************************************************************
 * Level_4_Exercises.cpp                                                                                       *
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
 * Practical C++ Programming - O'Reilly Page 82                                                                *
 *                                                                                                             *
 * Restrictions:                                                                                               *
 * - Does not have error handling for if user inputs anything other than a number.                             *
 *                                                                                                             *
 * Revision History:                                                                                           *
 * 30/05/2021 - Ronan Cassidy                                                                                  *
 *                                                                                                             *
 * Exercises:                                                                                                  *
 * 1: Write a program that converts Celcius to Farenheit. F = (9/5)C + 32                                      *
 * 2: Write a program to calculate the volume of a sphere, (4/3)r^3.                                           *
 * 3: Write a program to print out the perimeter of a rectangle given its height and width by user.            *
 * 4: Write a program that converts kilometers per hour to miles per hour. miles = (km - 0.6213712)            *
 * 5: Write a program that takes in hours and minutes then convert to a total minutes in specified time.       *
 * 6: Write a program that takes in total minutes and converts it into hours and minutes.                      *
 *                                                                                                             *
 * Notes:                                                                                                      *
 ***************************************************************************************************************/


 //Using namespace
using namespace std;

//Include statements
#include <iostream>
#include <string>
#include <math.h>

//Function Declaration allows definition to be written later on.
void exerciseOne();
void exerciseTwo();
void exerciseThree();
void exerciseFour();
void exerciseFive();
void exerciseSix();


//Main method
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


//Exercise 1: Write a program that converts Celcius to Farenheit. F = (9/5)C + 32
void exerciseOne()
{
    cout << "\n\nExercise One:\n";
    cout << "\n Please enter degrees in celcius: ";
    
    //Reading in of user input
    float celcius;
    cin >> celcius;

    //Caclulation and assigning of farenheit to float in accordance with provided formula
    float farenheit = ((9 / 5) * celcius) + 32;

    cout << "The corresponding temperature in Farenheit is " << farenheit;
}


//Exercise 2: Write a program to calculate the volume of a sphere, (4/3)r^3.
void exerciseTwo()
{
    cout << "\n\nExercise Two:\n";
    cout << "\n Please enter radius of sphere: ";

    //Reading in of user input
    double radius;
    cin >> radius;

    //Use of math library to get access to pow method allowing us to multiply by the power of Y in pow(X,Y)
    double volume = (4 / 3) * pow(radius, 3.0);

    cout << "The volume of the sphere is " << volume;
}


//Exercise 3: Write a program to print out the perimeter of a rectangle given its height and width by user.
void exerciseThree()
{
    cout << "\n\nExercise Three:\n";
    cout << "\n Please enter width then length of rectangle: ";

    //Reading in of user input
    double length = 0, width = 0;
    cin >> width;
    cin >> length;

    double perimeter = 2 * (width + length);

    cout << "The perimeter of the rectangle is " << perimeter;
}


//Exercise 4: Write a program that converts kilometers per hour to miles per hour. miles = (km * 0.6213712)
void exerciseFour()
{
    cout << "\n\nExercise Four:\n";
    cout << "\n Please enter km/h: ";

    //Reading in of user input
    double kmh;
    cin >> kmh;

    //Conversion of km to miles carried out by multiplying by constanst
    const double formulaMultiplier = 0.6213712;
    double mph = (kmh * formulaMultiplier);

    cout << "The corresponding mph is " << mph;
}


//Exercise 5: Write a program that takes in hours and minutes then convert to a total minutes in specified time.
void exerciseFive()
{
    cout << "\n\nExercise Five:\n";
    cout << "\n Please enter hours then minutes to convert: ";

    //Reading in of user input
    int hours = 0;
    int mins = 0;
    cin >> hours;
    cin >> mins;

    //Simple multiplication of hours by 60 and adding of minutes
    int totalMins = mins + (hours * 60);

    cout << "The total minutes is " << totalMins;
}


//Exercise 6: Write a program that takes in total minutes and converts it into hours and minutes.
void exerciseSix()
{
    cout << "\n\nExercise Six:\n";
    cout << "\n Please enter the total minutes to convert: ";

    //Reading in of user input
    int totalMins;
    cin >> totalMins;

    //Use modulus to get remainder of minutes
    int mins = totalMins % 60;

    //remove remainder minutes from total and divide by 60 to get hours
    int hours = (totalMins - mins)/60;

    cout << "The converted minutes is equal to " << hours << " hours and " << mins << " minutes.";
}