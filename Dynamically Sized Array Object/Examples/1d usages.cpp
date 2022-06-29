#include <iostream>
#include "../DynamicArrayObjectFiles/DynamicArray.h"


int main()
{
	/*
	Create the DynamicArray object with a starting size of 5 and step size of 10
	*/
	DynamicArray<char> CharArray = DynamicArray<char>(5, 10);

	/*
	Appending singular characters to the array
	by the 5th append, the array will expand from 5 to 15
	*/
	CharArray.Append('a');
	CharArray.Append('b');
	CharArray.Append('c');
	CharArray.Append('d');
	CharArray.Append('e');
	CharArray.Append('f'); // Expands here
	CharArray.Append('g');
	CharArray.Append('h');
	CharArray.Append(' ');

	/*
	Creating an array to use the ArrayAppend function
	*/
	char textArray[24] = "TestTextWhichMakesSense"; // Create and array for test

	/*
	adding the array to Dynamic Array
	*/
	CharArray.ArrayAppend(textArray, 24, false);


	/*
	for each loop to print all the characters in the array
	*/
	for (char ChInside : CharArray)
	{
		std::cout << ChInside;
	}

	std::cout << std::endl;

	CharArray[3] = 'X'; // Change the 4th element from d to X
	CharArray.Replace('O', 4); // Change the 5th element from e to O

	/*
	For loop using i to present the[] operator
	*/
	for (int i = 0; i < CharArray.GetArrayIndexPointer(); i++)
	{
		std::cout << CharArray[i];

	}

	std::cout << std::endl;

	/*
	Remove a character from the Array
	*/
	CharArray.Remove(8);

	std::cout << CharArray << std::endl;

}