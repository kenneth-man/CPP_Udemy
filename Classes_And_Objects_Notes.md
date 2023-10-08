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