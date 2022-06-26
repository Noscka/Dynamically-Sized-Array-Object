#include <iostream>
#include "Dynamically Sized Array Object/DynamicArray.h"

int main()
{
    DynamicArray Array = DynamicArray();

    char textArray[24] = "TestTextWhichMakesSense";

    std::cout << Array << std::endl;
    for (char ch : textArray)
    {
        std::cout << "=============================================" << std::endl;
        Array.Append(ch);
        std::cout << "Char Array after adding: " << Array << std::endl;
        std::cout << "=============================================" << std::endl;
    }

    std::cout << "Char Array at end: " << Array << std::endl;
    std::cout << "Char Array Size at end: " << Array.GetArraySize() << std::endl;
    std::cout << "Char Array Index Pointer at end: " << Array.GetArrayIndexPointer() << std::endl;
    return 0;
}