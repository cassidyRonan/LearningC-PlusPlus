/***************************************************************************************************************
 * Level_1.cpp                                                                                                 *
 * Author: Ronan Cassidy                                                                                       *
 *                                                                                                             *
 * Purpose:                                                                                                    *
 * This file contains the 'main' function. Program execution begins and ends there.                            *
 * This file is the first in this series of learning projects. Here we have a simple print out to the console. *
 * Also using this as a template file documentation header.                                                    *
 *                                                                                                             *
 * Usage:                                                                                                      *
 * Run the program by executing the console application                                                        *
 *                                                                                                             *
 * Refrences:                                                                                                  *
 * None                                                                                                        *
 *                                                                                                             *
 * Restrictions:                                                                                               *
 * (List any limits or restrictions that may apply such as data file must be correctly formatted)              *
 *                                                                                                             *
 * Revision History:                                                                                           *
 * 29/05/2021 - Ronan Cassidy                                                                                  *
 ***************************************************************************************************************/

//Library Including:
#include <iostream>
#include <string>
using namespace std;

int total = 0;

//Main Method
int main()
{
    //Simple print out of Hello World Text
    //cout = console out
    cout << "Hello World!\n";

    //Basic for loop
    for (size_t counter = 0; counter < 6; counter++)
    {
        total += counter;
    }

    //Printing to console, we use "<<" to concat different variables together for a string
    cout << "Counter: " << total;

    //Get user input and pass it back out
    //cin = console in
    string name;
    cin >> name;
    cout << "My name is " << name;

    return(0);
}
