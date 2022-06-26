#include <iostream>
#include "DynamicArrayObjectFiles/DynamicArray.h"

int main()
{
    DynamicArray Array = DynamicArray();

    char textArray[24] = "TestTextWhichMakesSense";

    for (char ch : textArray)
    {
        Array.Append(ch);
    }

    Array.Replace('h', 22);

    std::cout << "Char Array at end: " << Array << std::endl;
    return 0;
}