#include <iostream>
#include "DynamicArrayObjectFiles/DynamicArray.h"

class CustomData
{
public:
    int Storage;

    CustomData(int i)
    {
        Storage = i;
    }

    int operator+(const CustomData& other)
    {
        return Storage + other.Storage;
    }

    friend std::ostream& operator<<(std::ostream& os, const CustomData& input)
    {
        os << input.Storage;
        return os;
    }
};

template<class t>
t add(t num1, t num2)
{
    return num1 + num2;
}

template<class DataType>
class AddingClass
{
public:
    DataType add(DataType num1, DataType num2)
    {
        return num1 + num2;
    }
};

int main()
{
    AddingClass<CustomData> ac = AddingClass<CustomData>();


    CustomData a = CustomData(3);
    CustomData b = CustomData(4);

    //std::cout << a+b << std::endl;

    std::cout << ac.add(a, b) << std::endl;

    return 0;

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