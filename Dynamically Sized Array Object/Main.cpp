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
    DynamicArray<char> Array = DynamicArray<char>();
    DynamicArray<char> ArrayS = DynamicArray<char>();
    DynamicArray<DynamicArray<char>> TDArray = DynamicArray<DynamicArray<char>>();

    Array.ArrayAppend((char*)"abc", 3);

    ArrayS.ArrayAppend((char*)"def", 3);

    TDArray.Append(Array);
    TDArray.Append(ArrayS);

    for (DynamicArray<char> ArrayInside : TDArray)
    {
        for (char intInside : ArrayInside)
        {
            std::cout << intInside;
        }
        std::cout << ", " << std::endl;
    }

    TDArray.Clear();

    for (DynamicArray<char> ArrayInside : TDArray)
    {
        for (char intInside : ArrayInside)
        {
            std::cout << intInside;
        }
        std::cout << ", " << std::endl;
    }

    return 0;
}