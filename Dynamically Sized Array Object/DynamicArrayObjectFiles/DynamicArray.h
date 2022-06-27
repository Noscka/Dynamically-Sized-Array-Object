#pragma once
#include <iostream>

class DynamicArray
{
private:
	int ArraySize;			// Array starting size and the size after it is resized
	char* Array;			// Pointer to Array
	int ArrayIndexPointer;	// keeps track amount of objects in array
	int ArrayStepSize;		// how much the array will get increased by when it reaches the limit
public:
	DynamicArray();																// Constructor
	void ArrayAppend(char ArrayToAdd[], int size, bool includeEscape = false);	// Adds an array to the Dynamic Array
	void Append(char charToAdd);												// Adds a character to the Array
	void Replace(char CharToReplace, int position);								// Replaces a character in the Array
	void Remove(int position);													// Removes character and moves everything infront of it back

	// Get private variables
	int GetArraySize();
	int GetArrayIndexPointer();
	int GetArrayStepSize();

	friend std::ostream& operator<<(std::ostream& os, const DynamicArray& Array)
	{
		os << Array.Array;
		return os;
	}
};