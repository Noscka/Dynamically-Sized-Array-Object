#include <iostream>
#include "DynamicArrayObjectFiles/DynamicArray.h"

/// <summary>
/// Class for testing custom data types
/// </summary>
class DATestData
{
public:
    int NumForTest;

    DATestData() {}

    DATestData(int number)
    {
        NumForTest = number;
    }

    friend std::ostream& operator<<(std::ostream& os, const DATestData& Data)
    {
        os << Data.NumForTest;
        return os;
    }
};

int main()
{
    DynamicArray<DATestData> Array = DynamicArray<DATestData>(); // Create object

    //char textArray[24] = "TestTextWhichMakesSense"; // Test text to allow for easy mass append
    //int textArray[] = {1,5,2,6,1,2,7,8,4,2,35,1,25,15,6}; // Test numbers to allow for easy mass append
    
    //Array.ArrayAppend(textArray, 24);

    //Array.Remove(1);
    Array.Append(DATestData(2));
    Array.Append(DATestData(6));

    for(DATestData obj : Array)
    {
        std::cout << obj.NumForTest << std::endl;
    }
    return 0;
}