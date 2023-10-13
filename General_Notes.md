## Build Process
### 1) Compiling (higher level human readable code to lower level machine code)
### 2) Linking with external libraries
### 3) Create an executable file

<br>

### When files are compiled, object files are created for those files. These object files are then linked together to create the executable file.

### Linker errors occur when there is a library or object file missing, that's being referenced

### Runtime errors occur when the program is running

<br>

## Rebuild = Clean, then build
### Compile everything from scratch; default compiler behavior is to compile only changed files

<br>

## Debug vs Release Configuration
### Debug Configuration contains object files that contain debugging information; Relase Configuration contains object files that are optimized for size and speed.

<br>

## Preprocessor Directives
### Import header files
### Processes code before compilation; begin with `#`
### e.g.
```
#include <iostream>
```
### is a Preprocessor Directive. When the preprocessor sees this, it will replace this line with the file that it's referring to

<br>

## `int main()` Function
### Entry point of the program; must be defined in every C++ program; Only one main function per program
### Another version of main function is `int main(int argc, char* argv[])` that expects arguments from the OS, from the commandline

<br>

## Namespaces
### Used to prevent naming conflicts
### e.g. Using entire namespace
```
using namespace std
```

<br>

### e.g. Using only what you need
```
using std::cout
```

<br>

### e.g. Using different namespaces
```
std::cout
customLibraryNamespace::cout
```

<br>

## Primitive Types
- ### 1 byte === 8 bits
| 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |
| --- | --- | --- | --- | --- | --- | --- | --- |
| 2^7 | 2^6 | 2^5 | 2^4 | 2^3 | 2^2 | 2^1 | 2^0 |
- ### Max value of 8 bits is 255, max number of combinations is 256 (includes 0)

![](./img/primitive_data_type_sizes.png)

![](./img/primitive_data_type_char.png)

<br>

### By default integers are ***Signed*** (can be positive or negative)
- ### If this signed leftmost bit is 0, the number is positive or zero; if it is 1, the number is negative
### ***Unsigned*** integers can only be positive
![](./img/primitive_data_type_int.png)

![](./img/primitive_data_type_float.png)

![](./img/primitive_data_type_bool.png)

<br>

## Constants
### Constants are immutable after they are declared and initialized

<br>

### Types of Constants
- ### Literal Constants (specific values... 3.14)
- ### Declared Constants (const)
- ### Constant expressions (constexpr)
- ### Enumerated constants (enum)
- ### Defined constants (#define)

<br>

## `std::endl`
### `std::endl` is equivalent to `\n` then `std::flush()` (flush the buffer to ensure the output is immediately displayed)
### Don't use in most cases, because it's inefficient

<br>

## Buffer
### Temporary storage area in memory that holds data while it's being transferred or processed
### Commonly used in various I/O (input/output) operations to efficiently manage the transfer of data between different parts of a program or between the program and external devices

<br>

### Input Buffer
- ### Holds data that's been read from an input source (e.g. file, keyboard, network)
- ### When reading data, it's more efficient to read a chunk of data into a buffer rather than reading one byte or character at a time. This minimizes the number of actual I/O operations, improving performance

<br>

### Output Buffer
- ### Holds data that's been written to an output source (e.g. file, console, network)
- ### When writing data, it's often more efficient to accumulate data in a buffer and write it as a block, reducing the number of actual I/O operations and improving performance.

<br>

## Arrays
### Elements all same type
### Fixed size
### Name of the array represents the location of the 1st element in the array. The index represents the offset in memory from the 1st element's location
### Efficient, but less flexible (use when size is known and fixed)

<br>

### e.g.
```
char myArray [7] {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
```

<br>

### e.g.
```
// size automatically determined
int myArray [] {1, 2, 3};
```

<br>

### e.g.
```
// initialize all to 0
int myArray [420] {0};
```

<br>

### e.g.
```
// initialize first 2 indexes to  3 and 5, and the rest to 0
int myArray [10] {3, 5};
```

<br>

### e.g.
```
// assign first and last indexes to 100 and 1000
int arr [10] {0};
arr[0] = 100;
arr[(sizeof(arr) / sizeof(arr[0])) - 1] = 1000;
```

<br>

![](./img/array_multi_dimensional.png)

![](./img/array_multi_dimensional_2.png)

<br>

## Vectors
### Elements all same type
### Dynamic size
### Can provide bounds checking with some methods
### Vectors are objects

<br>

### e.g.
```
#include <vector> // required for vectors
using std::vector; // or using namespace std; part of the standard library

vector<int> myVector {1, 2, 3, 4, 5};
```

<br>

### e.g.
```
// initialize all 420 elements to 69.69
vector<double> myVector (420, 69.69);
```

<br>

### e.g.
```
// initialize all 5 elements to 0
vector<int> myVector (5);
```

<br>

## Increment Operator
### e.g. Preincrement (incremented before it's used)
```
int counter {10};
int result {0};

result = ++counter;

cout << counter << '\n'; // 11
cout << result << '\n'; // 11
```

<br>

### e.g. Postincrement (used before it's incremented)
```
int counter {10};
int result {0};

result = counter++;

cout << counter << '\n'; // 11
cout << result << '\n'; // 10
```

## Type Casting
### ***Higher Type*** means it can store larger values
![](./img/mixed_type_conversions.png)

![](./img/mixed_type_conversions_2.png)

### Static casting explicitly
![](./img/mixed_type_conversions_3.png)

<br>

## 3 Way Comparion Operator ('Spaceship')
### In C++20, <=>
### e.g.
```
(A <=> B) < 0 // is true if A < B
(A <=> B) > 0 // is true if A > B
(A <=> B) == 0 // is true if A and B are equal/equivalent
```

<br>

## Compund Assignment Operators
![](./img/compound_assignment_operators.png)

<br>

## Operator Precedence
![](./img/operator_precedence.png)

<br>

## Looping Constructs
![](./img/looping_constructs.png)

<br>

## C Style Strings
![](./img/c_style_strings.png)

<br>

## C++ Style Strings
![](./img/cpp_style%20strings.png)

![](./img/cpp_style%20strings_2.png)

### Cannot concatenate C style literals with `+` operator; can with C++ strings
![](./img/cpp_style%20strings_3.png)

<br>

### `size_t`
### Unsigned integer type that is the result of the `sizeof` operator 
### Can store the maximum size of a theoretically possible object of any type
### Safely store the value of any non-member pointer
### Commonly used for array indexing and loop counting. Programs that use other types, such as `unsigned int` for array indexing may fail on, e.g. 64-bit systems when the index exceeds UINT_MAX or if it relies on 32-bit modular arithmetic
### When indexing C++ containers, such as `std::string`, `std::vector`, etc...
### e.g.
```
for (size_t i {0}; i < myString.length(); ++i) {
	// do something
}
```

<br>

## `string::npos`
### returned from `std::string.find()` if element in string is not found

<br>

## `last`
### Last element returned from `std::find()` if the element in vector is not found

<br>

## Function Prototypes
![](./img/function_prototypes.png)

![](./img/function_prototypes_2.png)

![](./img/function_prototypes_3.png)

![](./img/function_prototypes_4.png)

### Can't define local functions inside other function, unless using lambda functions

<br>

## Passing Arrays to Functions
### Remember - Array names evaluate to the memory location address of the first element in the array; elements stored contiguously
![](./img/passing_arrays_to_functions.png)

![](./img/passing_arrays_to_functions_2.png)

![](./img/passing_arrays_to_functions_3.png)

![](./img/passing_arrays_to_functions_4.png)

![](./img/passing_arrays_to_functions_5.png)

<br>

## Pass by Value
![](./img/pass_by_value.png)

### Default arguments can be in the prototype or the definition, but not both (best practice in the prototype)

### Good:
- ### Since we're making a copy, we can't modify the original value by mistake

### Bad:
- ### If the object is large, it can be expensive (storage and time) to make a copy

- ### Sometimes we want to modify the original value

<br>

## Pass by Reference
![](./img/pass_by_reference.png)

![](./img/pass_by_reference_2.png)

![](./img/pass_by_reference_3.png)

![](./img/pass_by_reference_4.png)

<br>

## What is a Reference?
### An alias for an already existing variable. Once a reference is initialized to a variable, it cannot be changed to refer to another variable
![](./img/reference.png)

### (A) !!! **Address Operator** and **Reference Operator** are different but share the same operator `&`. Reference is during variable declaration
![](./img/reference_3.png)

<br>

## Overloading Functions
![](./img/overloading_functions.png)
### Have to define each overloaded function (could use templates)
### Compiler will type coerce (e.g. if a function expecting a float doesn't exist, the function expecting a double will be used, converting the float arg to a double)
![](./img/overloading_functions_2.png)

![](./img/overloading_functions_3.png)

<br>

## Uniform Initialization/Initializor List (vs normal assignment)
![](./img/uniform_initialization.png)

<br>

## Static Local Variables
### Initialized once; Retains it's value between calls, until the program ends
### When you need to know the previous value of a variable in a function without having to keep passing back in
![](./img/static_local_variables.png)

<br>

## How do Function Calls work?
### Use an area of memory called the **Call stack**; Each item in the call stack is called a **Frame** or **Activation record**
### *Memory consists of **Heap**, **Stack**, **Static** and **Global** variables, **Code***
![](./img/function_calls.png)

![](./img/function_calls_2.png)

<br>

## Inline Functions
![](./img/inline_functions.png)

## Recursion
### A function that calls itself
### 2 or more activation records for the same function on the call stack === recursion
![](./img/recursive.png)

![](./img/recursive_2.png)

![](./img/recursive_3.png)

<br>

## L values and R values
### **L value** - have names and are addressable
### Anything that's not an **L value**, is an **R value** (e.g. literals, temporary values, etc...)

![](./img/l_value.png)

![](./img/l_value_2.png)

![](./img/l_value_3.png)

![](./img/l_value_4.png)

![](./img/l_value_4b.png)

<br>

![](./img/r_value.png)

![](./img/move_constructors_4.png)

![](./img/r_value_2.png)