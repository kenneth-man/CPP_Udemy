## Classes and Objects
![](./img/classes_and_objects.png)

![](./img/classes_and_objects_2.png)

<br>

## Declaring a Class, Creating Objects
### `new [className()]`, returns a memory address to the object
### Use `new` the object should remain in memory until you manually `delete` it. If you don't use `new`, then the object will be destroyed when it goes out of scope.

### Because `new` objects are created on the heap and will need to be freed, otherwise it's created on the stack where it's popped off automatically

![](./img/declaring_class.png)

![](./img/creating_objects.png)

<br>

## Access Class members
### 2 ways:
- ### Dot notation
- ### Arrow notation
![](./img/access_class_members.png)

### If we have a pointer to an object, we have to dereference the pointer first (with parenthesis) then use dot notation, or just use arrow notation
![](./img/access_class_members_2.png)

<br>

## Access Modifiers: `public`, `private`, `protected`
### `public` - accessible everywhere
### `private` - accessible only by members or friends of the class
### `protected` - accessible only by members, friends, or children of the class

![](./img/access_modifiers.png)

<br>

## Class methods
![](./img/class_methods.png)

![](./img/class_methods_2.png)

### Outside the class declaration...
![](./img/class_methods_3.png)

![](./img/class_methods_4.png)

### ^ `#include` with double quotes tells the compiler to look in local project; when angle brackets are used `<>`, tells the compiler to look in the standard library

### Scope resolution operator required `::`

### To use a class in another file, must `#include` the header `.h` file, not `.cpp` file

<br>

## Include guard
### Can also use `#pragma once`
### Guarantees that a header file is only included once in the program
### Checks if the header file is already defined, if not, define it and include the header file
![](./img/include_guard.png)

<br>

## Constructors and Destructors
### A default constructor is called if the class has no constructor defined
![](./img/constructors.png)

![](./img/constructors_2.png)

![](./img/destructors.png)

![](./img/destructors_2.png)

![](./img/destructors_3.png)

<br>

## Constructor Initialization Lists
![](./img/constructor_initialization_list.png)

![](./img/constructor_initialization_list_2.png)

![](./img/constructor_initialization_list_3.png)

![](./img/constructor_initialization_list_4.png)

<br>

## Delegating Constructors
![](./img/delegating_constructors.png)

![](./img/delegating_constructors_2.png)

<br>

## Copy Constructor
### When passing an object by value, the copy constructor is called. C++ provides a default copy constructor
![](./img/copy_constructor.png)

![](./img/copy_constructor_5.png)

<br>

### Where are Copy Constructors used?
![](./img/copy_constructor_2.png)

![](./img/copy_constructor_3.png)

![](./img/copy_constructor_4.png)

<br>

### Declare and implement a copy constructor
![](./img/copy_constructor_6.png)

![](./img/copy_constructor_7.png)

<br>

### Shallow Copy vs Deep Copy
- ### A shallow copy, copies the memory addresses of the elements in the source object to the target object. It does not create new memory for the copied elements but instead points to the same memory locations as the source object. This means that changes made to the elements in one object will affect the other as well.

- ### A deep copy, on the other hand, creates a new memory on the heap and copies the contents of the source object to the target object. This results in the target object having its own copy of the data, and changes made to one object will not affect the other.

![](./img/shallow_vs_deep_copy.png)

<br>

## Move Constructors
![](./img/move_constructors.png)

![](./img/move_constructors_2.png)

### R-Value references `&&` = reference to the unnamed temporary value

![](./img/move_constructors_3.png)

### Example:
![](./img/move_constructors_5.png)

### - The Copy constructor definition makes a deep copy
![](./img/move_constructors_6.png)

![](./img/move_constructors_7.png)

![](./img/move_constructors_8.png)

![](./img/move_constructors_9.png)

<br>

## `This`
![](./img/this_keyword.png)

![](./img/this_keyword_2.png)

![](./img/this_keyword_3.png)

![](./img/this_keyword_4.png)