#include "DynamicArray.h"

DynamicArray::DynamicArray()
{
    ArraySize = 1;
    ArrayIndexPointer = 0;
    ArrayStepSize = 2;

    Array = new char[ArraySize]();
    std::cout << "Array: " << Array << std::endl;
}

void DynamicArray::Append(char charToAdd)
{
    std::cout << "Adding To array: " << charToAdd << std::endl;

    if (ArrayIndexPointer >= ArraySize) // if Current Index pointer is more then the array size (trying to add to OutOfRange space)
    {
        printf("Expanding\n");

        char* TempArray = new char[ArraySize](); // Create new array which will store the original values

        for (int i = 0; i < ArraySize; i++) // assign/copy all values from CharArray to Temp
        {
            char ch = Array[i];
            TempArray[i] = Array[i];
            std::cout << "TempArray[" << i << "] <- " << ch << std::endl;
        }

        ArraySize += ArrayStepSize; // expand the Array size
        Array = new char[ArraySize](); // over ride CharArray with new, bigger, array

        /*
        ArraySize-2 calculates TempArray size
        Copy all values from Temp array to "old" expanded array
        */
        for (int i = 0; i < ArraySize - ArrayStepSize; i++)
        {
            char ch = TempArray[i];
            Array[i] = TempArray[i];
            std::cout << "CharArray[" << i << "] <- " << ch << std::endl;
        }

        delete[] TempArray;
    }

    Array[ArrayIndexPointer] = charToAdd;
    ArrayIndexPointer++;
}

int DynamicArray::GetArraySize()
{
    return ArraySize;
}

int DynamicArray::GetArrayIndexPointer()
{
    return ArrayIndexPointer;
}

int DynamicArray::GetArrayStepSize()
{
    return ArrayStepSize;
}