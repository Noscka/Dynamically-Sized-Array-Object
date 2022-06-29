#include <iostream>
#include "../DynamicArrayObjectFiles/DynamicArray.h"

int main()
{
    DynamicArray<char> FirstArray = DynamicArray<char>();
    DynamicArray<char> SecondArray = DynamicArray<char>();
    DynamicArray<DynamicArray<char>> TwoDimentionalCharArray = DynamicArray<DynamicArray<char>>();

    FirstArray.ArrayAppend((char*)"Some char in first array", 25, false); // add some data
    SecondArray.ArrayAppend((char*)"Some char in second array", 26, false); // add some data

    TwoDimentionalCharArray.Append(FirstArray); // Add both arrays to the 2 dimentional array
    TwoDimentionalCharArray.Append(SecondArray);

    for (DynamicArray<char> Array : TwoDimentionalCharArray)
    {
        std::cout << Array << std::endl;
    }
}