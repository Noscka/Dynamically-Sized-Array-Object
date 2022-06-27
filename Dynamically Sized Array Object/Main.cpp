#include <iostream>
#include "DynamicArrayObjectFiles/DynamicArray.h"

int main()
{
    DynamicArray Array = DynamicArray(); // Create object

    char textArray[24] = "TestTextWhichMakesSense"; // Test text to allow for easy mass append

    Array.ArrayAppend(textArray, 24);

    Array.Remove(1);
    Array.Append('g');
    Array.Append('g');

    std::cout << Array[2] << std::endl;

    std::cout << "Char Array at end: " << Array << std::endl;
    return 0;
}

// TODO: create DynamicArray for all types instead of just char