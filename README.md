# Dynamically Sized Array Object
This project is a simple project to create a class which can included and used in any project. it is a class/object that is meant to turn [dynamic array size function](https://github.com/Noscka/Dynamic-Array-size-Function) into an object for easier use.

## Usage
The DynamicArray was made to mimic 'vanilla' C++ arrays as closely as possible with more functions, operators and usage being made to closely link the usage of both. There are many limitations (things I have checked and couldn't find a way around such as the object creation having to be like standard objects (e.g. `DynamicArray<int> name = DynamicArray<int>();`) instead of the array object creation (e.g. `int name[] = {1,2,4,5};`).

---

### Object Creation
`DynamicArray<DataType> DynamicArrayName = DynamicArray<DataType>()` - Object Creation with default values (starting array size = 10, step size = 5) </br>
`DynamicArray<DataType> DynamicArrayName = DynamicArray<DataType>(int StartSize, int StepSize)` - object creation with custom values

#### Example
to create a char DynamicArray for chat logs, you would have to write `DynamicArray<char> ChatLogs = DynamicArray<char>();` and if you have a lot of ram and a lot of traffic, you would do `DynamicArray<char> ChatLogs = DynamicArray<char>(200, 100);` with your own values of course.

---

### Append
`DynamicArrayName.Append(ArrayDataType ObjectToAdd);`

#### Example
adding a charater to the chat logs from before would look like this `ChatLogs.Append('a');`

---

### ArrayAppend
`DynamicArrayName.ArrayAppend(ArrayDataType ArrayToAdd[], int size, bool includeEscape);` - First 2 parameters are self explanatory, IncludeEscape is a bool and will ignore all escape characters (characters with value 0) in a string/char array if set to true

#### Example
if you need to append a new whole line of text that is 20 characters long to the Array and you want to remove the escape character (keeping it in will make the console not print anything after the text in the array), you would have to do `ChatLogs.ArrayAppend(ChatArray, 20, false);`

---

### Replace
`DynamicArrayName.Replace(ArrayDataType ReplaceObject, int position);`

#### Example
if you wanna replace a character in the place 12 with x, you would write `ChatLogs.Replace('x', 12);`

---

### Remove
`DynamicArrayName.Remove(int position)` - Removes object in the position, and moves everything that was infront of it, back 1 spot to adjust

#### Example
If you wanna remove the character in position 50, you would write `ChatLogs.Remove(50);`

---

### GetArray
`DynamicArrayName.GetArray()` - returns the array that is currently stored in the DynamicArray Object

### GetArraySize
`DynamicArrayName.GetArraySize()` - Returns The current Array Size

### GetArrayIndexPointer
`DynamicArrayName.GetArrayIndexPointer()` - Returns the position of where the next object will be put (can be used for loops to go through the whole array)

### GetArrayStepSize
`DynamicArrayName.GetArrayStepSize()` - returns the step size, the amount the array increases when it reaches the limit
