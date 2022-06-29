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
    DynamicArray<int> Array = DynamicArray<int>();
    DynamicArray<int> ArrayS = DynamicArray<int>();
    DynamicArray<DynamicArray<int>> TDArray = DynamicArray<DynamicArray<int>>();

    Array.Append(2);
    Array.Append(3);
    Array.Append(4);
    Array.Append(5);

    ArrayS.Append(5);
    ArrayS.Append(51);
    ArrayS.Append(521);
    ArrayS.Append(667);
    ArrayS.Append(51);
    ArrayS.Append(743);

    TDArray.Append(Array);
    TDArray.Append(ArrayS);

    for (DynamicArray<int> ArrayInside : TDArray)
    {
        for (int intInside : ArrayInside)
        {
            std::cout << intInside << std::endl;
        }
        std::cout << " ||| " << std::endl;
    }

    return 0;
}