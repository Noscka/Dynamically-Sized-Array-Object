#include <iostream>
#include "DynamicArrayObjectFiles/DynamicArray.h"

int main()
{
    DynamicArray Array = DynamicArray();

    char textArray[24] = "TestTextWhichMakesSense";

    for (char ch : textArray)
    {
        if (!(ch == 0))
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