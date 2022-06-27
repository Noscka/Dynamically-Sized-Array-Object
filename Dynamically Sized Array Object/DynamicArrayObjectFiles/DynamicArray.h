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
	/// <summary>
	/// Constructor to set all the variables
	/// </summary>
	DynamicArray();																// Constructor

	/// <summary>
	/// Constructor with starting size and step size params for custom objects
	/// </summary>
	/// <param name="StartSize"> - Starting size of the array</param>
	/// <param name="StepSize"> - how much the array will increase each time it reaches the limit</param>
	DynamicArray(int StartSize, int StepSize);									// Constructor with starting size and step size params

	/// <summary>
	/// Appends another array to the DynamicArray
	/// </summary>
	/// <param name="ArrayToAdd"> - the array to append</param>
	/// <param name="size"> - size of the array</param>
	/// <param name="includeEscape">(default = false) - if escape characters should be appended as well</param>
	void ArrayAppend(char ArrayToAdd[], int size, bool includeEscape = false);	// Adds an array to the Dynamic Array

	/// <summary>
	/// Append single characters
	/// </summary>
	/// <param name="charToAdd"> - character to add</param>
	void Append(char charToAdd);												// Adds a character to the Array

	/// <summary>
	/// Replaces a a chosen positin with the chosen character
	/// </summary>
	/// <param name="ReplaceCharacter"> - Character to place in the position</param>
	/// <param name="position"> - position to put the character in</param>
	void Replace(char ReplaceCharacter, int position);							// Replaces a character in the Array

	/// <summary>
	/// Remove and move all characters infront, back 1 spot
	/// </summary>
	/// <param name="position"> - Position to remove</param>
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

	/// <summary>
	/// [] operator which acts the same as the Array [] operator
	/// </summary>
	/// <param name="position"> - position of the value wanted</param>
	/// <returns>value in the position</returns>
	char operator[](int position)
	{
		return Array[position];
	}
};