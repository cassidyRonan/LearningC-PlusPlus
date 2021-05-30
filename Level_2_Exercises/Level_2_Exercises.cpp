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
 * - There is no error handling for if the user inputs anything other than an integer for the menu selection   *
 *                                                                                                             *
 * Revision History:                                                                                           *
 * 29/05/2021 - Ronan Cassidy                                                                                  *
 * 30/05/2021 - Ronan Cassidy                                                                                  *
 *                                                                                                             *
 * Exercises:                                                                                                  *
 * 1: Write a program to print you name, SSN and Date of Birth.                                                *
 * 2: Write a program to print a block E that is 7 *'s high and 5 wide.                                        *
 * 3: Write a program to find area and circumference of a rectangle 3 inches wide and 5 inches long.           *
 * 4: Expand on the previous exercise so it works for a reactangle of 6.8 inches wide by 2.3 inches long.      *
 * 5: Write a program to print "HELLO" in big block letters where each letter is 7 *'s high and 5 wide.        *
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
void exerciseThree();
void exerciseFour();
void exerciseFive();



//Exercise 1: Write a program to print you name, SSN and Date of Birth.
void exerciseOne()
{
    cout << "\n\nExercise One:\n";

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
    string selectionChoice;
    
    //Get user selection of which exercise to run.
    cout << "Please select an exercise (1-5): ";
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
    }


    return(0);
}


//Definition of the previously declared function
//Exercise 2: Write a program to print a block E that is 7 *'s high and 5 wide.
void exerciseTwo() 
{
    cout << "\n\nExercise Two:\n";
    
    cout << "\n*****";
    cout << "\n*";
    cout << "\n*****";
    cout << "\n*";
    cout << "\n*****";
}


//Exercise Three: Write a program to find area and circumference of a rectangle 3 inches wide and 5 inches long.
void exerciseThree() 
{
    cout << "\n\nExercise Three:\n";

    //Setting of width and length hard coded though getting user input would be quite simple with cin
    const int width = 3; 
    const int length = 5;

    int area = width * length;
    int circumference = (2 * width) + (2 * length);

    cout << "\nRectangle - Width: " << width << "  Length: " << length;
    cout << "\nArea: " << area << "  Circumference: " << circumference << "\n";
}


//Exercise 4: Expand on the previous exercise so it works for a reactangle of 6.8 inches wide by 2.3 inches long.
void exerciseFour()
{
    cout << "\n\nExercise Four:\n";

    //Changing of datatype to double means that when values are multiplied it will not return an integer value
    const double width = 6.8;
    const double length = 2.3;

    double area = width * length;
    double circumference = (2 * width) + (2 * length);

    cout << "\nRectangle - Width: " << width << "  Length: " << length;
    cout << "\nArea: " << area << "  Circumference: " << circumference << "\n";
}


//Exercise 5: Write a program to print "HELLO" in big block letters where each letter is 7 *'s high and 5 wide.
void exerciseFive()
{
    cout << "\n\nExercise Five:\n";

    //Important to include whitespace so that the it prints correctly, otherwise everything is shifted and becomes misaligned
    cout << "\n*   *" << " *****"   << " *    "  << " *    "  << " *****";
    cout << "\n*   *" << " *    "   << " *    "  << " *    "  << " *   *";
    cout << "\n*****" << " *****"   << " *    "  << " *    "  << " *   *";
    cout << "\n*   *" << " *    "   << " *    "  << " *    "  << " *   *";
    cout << "\n*   *" << " *****"   << " *****"  << " *****"  << " *****";
}