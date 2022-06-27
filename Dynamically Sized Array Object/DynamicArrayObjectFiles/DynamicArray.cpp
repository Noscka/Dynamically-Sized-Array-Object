#include "DynamicArray.h"

DynamicArray::DynamicArray()
{
    ArraySize = 1;
    ArrayIndexPointer = 0;
    ArrayStepSize = 2;

    Array = new char[ArraySize]();
}

void DynamicArray::ArrayAppend(char ArrayToAdd[], int size, bool includeEscape)
{
    for (int i = 0; i < size; ++i) // for loop to get and append all characters
    {
        if (includeEscape) // if IncludeEscape is true, append all characters
        {
            Append(ArrayToAdd[i]); // Append character to array
        }
        else if (!(ArrayToAdd[i] == 0)) // if IncludeEscape is false, include all chars that aren't null
        {
            Append(ArrayToAdd[i]); // Append character to array
        }
    }
}

void DynamicArray::Append(char charToAdd)
{
    if (ArrayIndexPointer >= ArraySize) // if Current Index pointer is more then the array size (trying to add to OutOfRange space)
    {
        char* TempArray = new char[ArraySize](); // Create new array which will store the original values

        for (int i = 0; i < ArraySize; i++) // assign/copy all values from CharArray to Temp
        {
            TempArray[i] = Array[i];
        }

        ArraySize += ArrayStepSize; // expand the Array size
        Array = new char[ArraySize](); // over ride CharArray with new, bigger, array

        /*
        ArraySize-2 calculates TempArray size
        Copy all values from Temp array to "old" expanded array
        */
        for (int i = 0; i < ArraySize - ArrayStepSize; i++)
        {
            Array[i] = TempArray[i];

        }

        delete[] TempArray;
    }

    std::cout << charToAdd << std::endl;

    Array[ArrayIndexPointer] = charToAdd;
    ArrayIndexPointer++;
}

void DynamicArray::Replace(char CharToReplace, int position)
{
    if (position >= (ArrayIndexPointer-1) || position < 0)// check if the position to remove is in array range
    {
        throw std::out_of_range("position was out of range of the array");
        return;
    }

    Array[position] = CharToReplace;
}

void DynamicArray::Remove(int position)
{
    if (position >= (ArrayIndexPointer - 1) || position < 0)// check if the position to remove is in array range
    {
        throw std::out_of_range("position was out of range of the array");
        return;
    }

    for (int i = position; i < (ArrayIndexPointer-1); i++)
    {
        Array[i] = Array[i + 1];
    }
    ArrayIndexPointer--;
}

int DynamicArray::GetArraySize()
{
    return ArraySize;
}

int DynamicArray::GetArrayIndexPointer()
{
    return ArrayIndexPointer;
}

int DynamicArray::GetArrayStepSize()
{
    return ArrayStepSize;
}