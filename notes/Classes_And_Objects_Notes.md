## Classes and Objects
![](./img/classes_and_objects.png)

![](./img/classes_and_objects_2.png)

<br>

## Declaring a Class, Creating Objects
### `new [className()]`, Returns a memory address to the object; allocated memory on the heap
```
e.g.
Player *enemy = new Player();
enemy->set_name("Random Enemy");
```
### Use `new` when the object should remain in memory until you manually `delete` it. If you don't use `new`, the object is created on the stack where it's popped off automatically (and memory freed) when it goes out of scope.

```
e.g.
// Popped off the stack when it goes out of scope
Player enemy {"Random Enemy"};
```

### `new` objects are created on the heap and MUST be freed, otherwise it will cause a memory leak, where you'll eventually run out of memory on the heap causing a crash

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
### `private` - accessible only by members or friends of the class; can't access on the object instance
### `protected` - accessible only by members, friends, or children of the class; can't access on the object instance

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

## Delegate Constructors
### A constructor calls another constructor in the same class (often during initialization lists)
![](./img/delegating_constructors.png)

![](./img/delegating_constructors_2.png)

<br>

## Copy Constructors (Lecture 147)
### Where are Copy Constructors needed?
![](./img/copy_constructor_2.png)

![](./img/copy_constructor_3.png)

![](./img/copy_constructor_4.png)

<br>

### C++ provides a default copy constructor if you don't define one
![](./img/copy_constructor.png)

![](./img/copy_constructor_5.png)

<br>

### Declare and implement a copy constructor
- ### `const` is used as we don't want to modify the source object
- ### `&` (by-reference) is used to prevent the copy constructor from being called recursively an infinite amount of times
- ### Always a single object defined in the parameters
![](./img/copy_constructor_6.png)

![](./img/copy_constructor_7.png)

<br>

### Shallow Copy vs Deep Copy
- ### Shallow Copy (default behaviour of copy constructor)
	- ### Copied object points to the same memory address as the source object (on heap)
	- ### ***PROBLEM***: When the target object is destroyed because it goes out of scope (function call ends), it's destructor is called and the memory it uses is released. Since the source and target objects point to the same memory address, the source object will now point to invalid storage. When the destructor of the source object is called, it will try to release memory that's invalid, and will crash

![](./img/shallow_copy.png)

![](./img/shallow_copy_2.png)

![](./img/shallow_copy_3.png)

<br>

- ### Deep Copy
	- ### Copied object will have a pointer to a different memory address than the source object; Create a copy of the data pointed to
	- ### Must Deep copy when you have a raw pointer as a class member

![](./img/deep_copy.png)

![](./img/deep_copy_2.png)

![](./img/deep_copy_3.png)

![](./img/deep_copy_4.png)

<br>

## Move Constructors
### Used to prevent copying of temporary r-values in copy constructors
### Moves an object on the heap rather than copying it
![](./img/move_constructors.png)

![](./img/move_constructors_2.png)

### In the context of **Move Semantics**, the R-Values are temporary objects that are created by the compiler
### R-Value reference operator `&&` = reference to the unnamed temporary R-value

![](./img/move_constructors_3.png)

![](./img/move_constructors_4.png)

<br>

### **Example**:
### Class defined with prototypes and a `int` pointer member
![](./img/move_constructors_5.png)

### - In our example, the Copy constructor definition makes a deep copy
![](./img/move_constructors_6.png)

### - Below, `Move{10}` and `Move{20}` are creating unnamed temporary objects (so they're R-Values), then we're passing them into a function, so the compiler will use copy constructors to make copies of the temporary objects

### - Inefficient because the copy constructor will make copies of all temporary objects

![](./img/move_constructors_7.png)

### Move constructor will now be called when an R-value is passed into the constructor

![](./img/move_constructors_8.png)

### Copy the address from the source to the target object, then `nullptr` the source pointer

![](./img/move_constructors_9.png)

<br>

## `This`
![](./img/this_keyword.png)

![](./img/this_keyword_2.png)

![](./img/this_keyword_3.png)

![](./img/this_keyword_4.png)

<br>

## Using `const` with Classes
![](./img/const_with_classes.png)

### We have to declare class methods as `const` (using `const` after the method declaration) to tell the compiler that they are allowed to be called from a `const` object (even if the method doesn't modify the object)
![](./img/const_with_classes_2.png)

<br>

## Static Class members
### Access attributes and methods without creating an instance of the class/an object

### Accessing static members using the class name then the scope resolution operator `::`

### E.g.
```
Player::get_num_players();
Player::num_players;
```

### If the static attribute is private, then it will only be accessible from a member or friend. However, C++ allows us to initialize the private static attribute from outside the class

<br>

## Structs vs Classes
### Everything you can do with classes, you can do with structs
### ***1 difference*** - Members are public by default in a struct, private by default in a class
![](./img/struct.png)

<br>

## Friends of a Class
![](./img/friend_of_class.png)

![](./img/friend_of_class_2.png)

### `display_player` function has access to everything in the `Player` class
![](./img/friend_of_class_3.png)

![](./img/friend_of_class_4.png)

![](./img/friend_of_class_5.png)

![](./img/friend_of_class_6.png)

<br>

## Overloading Operators
### - Allows us to define how operators interact with our custom defined types
### - Cannot overload the following operators:
- ### `::`
- ### `.*`
- ### `.`
- ### `:?`
- ### `sizeof`

![](./img/operator_overloading.png)

### Overloading the assignment operator (Copy)
![](./img/overloading_operator_assignment_copy.png)

### where `Mystring` class is defined as...

![](./img/overloading_operator_assignment_copy_b.png)

![](./img/overloading_operator_assignment_copy_2.png)

### `operator=`
- ### means you want to overload the assignment operator, `=` 

![](./img/overloading_operator_assignment_copy_3.png)

### `this`
- ### refers to the left hand side of the assignment operator

### `rhs`
- ### refers to the right hand side of the assignment operator and is passed in the arguments

![](./img/overloading_operator_assignment_copy_4.png)

# TBC