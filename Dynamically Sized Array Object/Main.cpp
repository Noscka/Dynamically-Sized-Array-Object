#include <iostream>
#include "DynamicArrayObjectFiles/DynamicArray.h"

int main()
{
    DynamicArray<int> Array = DynamicArray<int>(); // Create object

    //char textArray[24] = "TestTextWhichMakesSense"; // Test text to allow for easy mass append
    //int textArray[] = {1,5,2,6,1,2,7,8,4,2,35,1,25,15,6}; // Test text to allow for easy mass append
    
    //Array.ArrayAppend(textArray, 24);

    //Array.Remove(1);
    Array.Append(44);
    Array.Append(22);

    std::cout << Array[1] << std::endl;

    std::cout << "Char Array at end: " << Array << std::endl;
    return 0;
}