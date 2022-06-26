#include "DynamicArray.h"

DynamicArray::DynamicArray()
{
    ArraySize = 1;
    ArrayIndexPointer = 0;
    ArrayStepSize = 2;

    Array = new char[ArraySize]();
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

    Array[ArrayIndexPointer] = charToAdd;
    ArrayIndexPointer++;
}

void DynamicArray::Remove(int position)
{
    if (position >= ArraySize || position < 0)// check if the position to remove is in array range
    {
        throw std::out_of_range("position was out of range of the array");
        return;
    }    

    Array[position] = ' ';
}

void DynamicArray::Replace(char CharToReplace, int position)
{
    if (position >= ArraySize || position < 0)// check if the position to remove is in array range
    {
        throw std::out_of_range("position was out of range of the array");
        return;
    }

    Array[position] = CharToReplace;
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