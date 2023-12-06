https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9934388#reviews

## Exception Handling
- ### Should be used only for synchronous code, not asynchronous
	- ### Asynchronous code involves operations that don't block the execution of the program, and exceptions might not propagate as expected
- ### What causes exceptions?
	- ### Insufficient resources
	- ### Missing resources
	- ### Invalid operations
	- ### Range violations
	- ### Underflows and overflows
	- ### Illegal data and many others

- ### Exception, Throwing, Catching
![](./img/exception_handling.png)

- ### `throw`, `try`, `catch`
![](./img/exception_handling_2.png)

- ### E.g.
![](./img/exception_handling_3.png)

<br>

## Throwing an exception from a function
- ### E.g. Below, if without a try-catch block, the program will terminate
![](./img//throw_from_function.png)

![](./img/throw_from_function_2.png)

<br>

## Handling multiple exceptions
![](./img/throw_multiple_exceptions.png)
![](./img/throw_multiple_exceptions_2.png)
![](./img/throw_multiple_exceptions_3.png)

- ### Also can use a 'Catch-all' handler
![](./img/throw_multiple_exceptions_4.png)

<br>

## Stack unwinding
![](./img/stack_unwinding.png)

<br>

## User defined exceptions
![](./img/user_defined_exceptions.png)

![](./img/user_defined_exceptions_2.png)

![](./img/user_defined_exceptions_3.png)

<br>

## Class level exceptions
![](./img/class_level_exceptions.png)

<br>

## `std::exception` class hierarchy
- ### We can create subclasses of `std::exception` to create custom exception objects
![](./img/exception_class_hierarchy.png)

- ### C++ 17 additions are in orange
![](./img/exception_class_hierarchy_2.png)

- ### E.g.
	- ### `noexcept` tells the compiler to not throw an exception from a method/function
![](./img/exception_class_hierarchy_3.png)

![](./img/exception_class_hierarchy_4.png)

![](./img/exception_class_hierarchy_5.png)