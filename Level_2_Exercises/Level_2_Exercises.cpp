/***************************************************************************************************************
 * Level_2_Exercises.cpp                                                                                       *
 * Author: Ronan Cassidy                                                                                       *
 *                                                                                                             *
 * Purpose:                                                                                                    *
 * This file contains several beginner exercises to help learn the C++ language, these exercises have been     *
 * taken from Practical C++ Programming by O'Reilly.                                                           *
 *                                                                                                             *
 * Usage:                                                                                                      *
 * Run the program by executing the console application                                                        *
 *                                                                                                             *
 * Refrences:                                                                                                  *
 * Practical C++ Programming - O'Reilly Page 63                                                                *
 *                                                                                                             *
 * Restrictions:                                                                                               *
 * (List any limits or restrictions that may apply such as data file must be correctly formatted)              *
 *                                                                                                             *
 * Revision History:                                                                                           *
 * 29/05/2021 - Ronan Cassidy                                                                                  *
 *                                                                                                             *
 * Exercises:                                                                                                  *
 * 1: Write a program to print you name, SSN and Date of Birth.                                                *
 * 2: Write a program to print a block E that is 7 *'s high and 5 wide.                                        *
 *                                                                                                             *
 * Notes:                                                                                                      *
 * Functions must be declared before they are called though it should be investigated if class methods are the *
 * same. C++ works from top to bottom. This can be circumvented by declaring the method above the main method. *
 ***************************************************************************************************************/


//Using namespace
using namespace std;

//Include statements
#include <iostream>
#include <string>

//Function Declaration allows definition to be written later on.
void exerciseTwo();

//Variable Declarations



//Exercise 1 Method
void exerciseOne()
{
    //Variable declarations
    string username, ssn, dob;

    //User's name entry
    cout << "Enter your name: ";
    cin >> username;

    //SSN entry
    cout << "\nEnter your SSN: ";
    cin >> ssn;

    //Date of birth entry
    cout << "\nEnter your Date of Birth: ";
    cin >> dob;

    //Output of all gathered data.
    cout << "\nHello " << username << "! Your date of birth is " << dob << " and your SNN is " << ssn;
};


//Main method
int main()
{
    exerciseOne();

    exerciseTwo();

    return(0);
}


//Definition of the previously declared function for exercise two
void exerciseTwo() 
{
    cout << "\n\nExercise two definition was written after main menu.\n";
    cout << "\n*****";
    cout << "\n*";
    cout << "\n*****";
    cout << "\n*";
    cout << "\n*****";

}
