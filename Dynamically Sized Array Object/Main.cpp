#include <iostream>
#include "DynamicArrayObjectFiles/DynamicArray.h"

int main()
{
    DynamicArray Array = DynamicArray(); // Create object

    char textArray[24] = "TestTextWhichMakesSense"; // Test text to allow for easy mass append

    for (char ch : textArray) // foreach loop to append all characters
    {
        if (!(ch == 0)) // exclude escape character for tests (makes it so anything after the escape character won't be shown)
        {
            std::cout << "char: " << ch << " | int: " << (int)ch << std::endl;
            Array.Append(ch);
        }
    }
    Array.Remove(1);
    Array.Append('g');
    Array.Append('g');

    std::cout << "Char Array at end: " << Array << std::endl;
    return 0;
}