/***************************************************************************************************************
 * Level_3.cpp                                                                                                 *
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
 * None                                                                                                        *
 *                                                                                                             *
 * Restrictions:                                                                                               *
 * None                                                                                                        *
 *                                                                                                             *
 * Revision History:                                                                                           *
 * 30/05/2021 - Ronan Cassidy                                                                                  *
 *                                                                                                             *
 * Notes:                                                                                                      *
 ***************************************************************************************************************/


 //Using namespace
using namespace std;

//Include statements
#include <iostream>
#include <string>

//Method declarations
void CalculateAverage();
void StringArrayTests();
void MultiDimensionalArrays();
void integerTypes();
void operatorShortcuts();

//Variable declarations
float input_data[3] = {2.30f, 8.96f, 12.62f}; //This is how to declare an array in C++
float total;
float average;

//Main Method
int main()
{
	CalculateAverage();

	StringArrayTests();
}

//Example of using an array and a foreach loop
void CalculateAverage()
{
	//Changing of array element
	input_data[0] = 29.5;

	//Use of a foreach loop to iterate through each value in the array
	for (float inputVal : input_data)
	{
		cout << "\nInput Value: " << inputVal;
		total += inputVal;
	}

	//Note the use of sizeof() to get the number of elements in the array
	float size = sizeof(input_data) / sizeof(input_data[0]);
	average = total / size;

	cout << "\nTotal: " << total;
	cout << "\nAverage: " << average;
}

//Various string and char array operation examples
void StringArrayTests()
{
	//Initialization of char array with escape character at the end
	char name[50];
	name[0] = 'S';
	name[1] = 'a';
	name[2] = 'm';
	name[3] = '\0';
	cout << "\n\n Name array: " << name;

	//name = "Carl";		//This operation is illegal, instead we use strcpy
	strcpy_s(name, "Carl"); //This copies the constant string value to the array we previously declared.
	cout << "\n Name array after strcpy: " << name;

	//To concat the strings, we instead use strcat
	strcat_s(name, " is here!");
	cout << "\n Name array after strcat: " << name;

	//Here we can get the length of the string using strlen()
	cout << "\n\n Length of Name array: " << strlen(name);

	//Now lets compare our final array with our expected result and see what the outcome is using strcmp()
	cout << "\n\n Does the array Match? 0 = True : " << strcmp(name,"Carl is here!");
}

//Decleration and changing of arrays in a multidimensional array
void MultiDimensionalArrays()
{
	int matrix[2][2] =
	{
		{1,2},
		{3,4}
	};

	matrix[0][0] = 10;
	matrix[0][1] = 14;
	matrix[1][0] = 9;
	matrix[1][1] = 31;
}

//Code block to show various examples of integers; no actual functionality
void integerTypes()
{
	//Useful table for datatype sizes and range available at https://www.geeksforgeeks.org/c-data-types/

	long int longAnswer;	//Usually allocates 4 bytes - Default signed so range = -2,147,483,648 to 2,147,483,647
	short int shortAnswer;	//Usually allocates 2 bytes - Default signed so range = -32,768 to 32,767
	int answer;				//Allocates 2 or 4 bytes

	//Setting up of a long integer requires the value to end with "L" either uppercase or lowercase.
	long int exampleLong = 12L;

	//The use of unsigned numbers allows the range to be doubled in the positive numbers whilst eliminating negative values
	unsigned short int doubledShort;
}

//Example of typical reference declaration
void referenceExample() 
{
	int itemCount;
	int& totalItems = itemCount; //The use of & at the beginning of the variable name declares this as a reference

	//Personal Note: I don't see their being a huge number of uses for this functionality but perhaps I haven't stumbled across it yet.
}

//Exploration of operator shortcuts
void operatorShortcuts()
{
	int totalAmount = 3;

	//Addition of 1 to variable
	++totalAmount; //increments before processing the current statement
	totalAmount++; //increments after processing the current statement

	//Subtraction of 1 to variable
	--totalAmount; //decrements before processing the current statement
	totalAmount--; //decrements after processing the current statement

	//Addition Shorthand
	totalAmount += 2;

	//Subtraction Shorthand
	totalAmount -= 2;

	//Multiplication Shorthand
	totalAmount *= 2;

	//Division Shorthand
	totalAmount /= 2;

	//Modulus Shorthand
	totalAmount %= 2;
}