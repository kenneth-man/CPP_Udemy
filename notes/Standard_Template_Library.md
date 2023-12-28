https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/10563444#questions

## Standard Template Library (STL)
- ### Library of reusable classes, functions, data structures and algorithms
- ### Implemented using C++ templates
![](./img/stl.png)

- ### STL Elements:
	- ### ***Containers***
		- ### Sequence
		- ### Associative
		- ### Adapters
	- ### ***Algorithms***
	- ### ***Iterators***
		- ### Input
		- ### Output
		- ### Forward
		- ### Bidirectional
		- ### Random Access
![](./img/stl_2.png)
![](./img/stl_3.png)
![](./img/stl_4.png)

<br>

## Generic Programming
- ### Allowing the same code to be used with different data types; e.g. an int, double or float for a function argument
- ### We can write generic code using **Macros**, **Class Templates** and **Function Templates**
- ### Macros are mostly used in legacy code as they are not type safe. The `Preprocessor` doesn't know about C++, so no type checking is done
![](./img/macros.png)

- ### `Preprocessor Directive`: Anything that begins with `#`
![](./img/macros_2.png)

<br>

- ### E.g. Substitution - The `Preprocesser` removes the `#define` statements and replaces the names with the values we defined
![](./img/macros_3.png)
![](./img/macros_4.png)

<br>

- ### E.g. Why we need Generic programming
![](./img/macros_5.png)
![](./img/macros_6.png)

<br>

## Generic programming using macros
- ### E.g.
![](./img/macros_7.png)
![](./img/macros_8.png)
![](./img/macros_9.png)

<br>

## Generic programming using function templates
- ### We define templates with placeholder values for types, then we pass the actual type when using the template. The compiler then generates the appropriate function at compile time
![](./img/function_templates.png)

- ### E.g. `T` generic can be named anything
![](./img/function_templates_2.png)
![](./img/function_templates_3.png)
![](./img/function_templates_4.png)
![](./img/function_templates_5.png)
![](./img/function_templates_6.png)

- ### E.g. Multiple generic types
![](./img/function_templates_7.png)
![](./img/function_templates_8.png)

<br>

## Generic programming using class templates
- ### Similar to function templates but at the class level
- ### E.g.
![](./img/class_templates.png)
![](./img/class_templates_2.png)
![](./img/class_templates_3.png)
![](./img/class_templates_4.png)

- ### E.g. Multiple generic types
![](./img/class_templates_5.png)
![](./img/class_templates_6.png)

- ### E.g. Generic array template class
- ### *(Non generic version)*
![](./img/class_templates_7.png)
![](./img/class_templates_8.png)
![](./img/class_templates_9.png)

- ### *(Generic version)*
![](./img/class_templates_10.png)
![](./img/class_templates_11.png)
![](./img/class_templates_12.png)

<br>

## STL Containers
![](./img/stl_containers.png)
![](./img/stl_containers_2.png)
![](./img/stl_containers_3.png)
![](./img/stl_containers_4.png)

<br>

## STL Iterators
- ### Most containers support iterators but not index based access; Makes code more generic
![](./img/iterators.png)
![](./img/iterators_2.png)
![](./img/iterators_5.png)
![](./img/iterators_10.png)

- ### E.g. `.begin()` and `.end()` return iterators
![](./img/iterators_3.png)

- ### E.g.
![](./img/iterators_4.png)

- ### E.g.
![](./img/iterators_6.png)

- ### E.g. Same as above but with for loop
![](./img/iterators_7.png)

- ### E.g.
![](./img/iterators_8.png)

- ### E.g. Reverse Iterators
![](./img/iterators_9.png)

- ### E.g. Const Interators (cannot be modified)
	- ### Lines 66 and 67 are equivalent
		- ### Must use `cbegin()` and `cend()`, if type `auto` and need a constant iterator
		- ### Use `rbegin()` and `rend()` for reverse iterators
![](./img/iterators_11.png)

- ### E.g. Const reverse iterators; `crbegin()`
![](./img/iterators_12.png)

<br>

## STL Algorithms
![](./img/algorithms.png)

- ### E.g. `find()`
![](./img/algorithms_3.png)
![](./img/algorithms_4.png)

- ### E.g. `foreach()` (functor, function pointer, lambda (Recommended) - all equivalent)
![](./img/algorithms_5.png)
![](./img/algorithms_6.png)
![](./img/algorithms_7.png)

- ### Iterator Invalidation
![](./img/algorithms_2.png)

<br>

## Sequence Container - `std::array`
- ### `std::array` is different from the C raw array
	- ### `std::array` is an object with access to many STL methods and members, whereas a raw array is just a memory address of it's first element, then subsequent elements are stored contiguously and ends with a null character
- ### `std::array` is a wrapper class around a raw array
![](./img/std_array.png)

- ### In C++11, initialization requires double `{}`, in C++14 only requires single `{}`
![](./img/std_array_2.png)

- ### E.g. Common methods
![](./img/std_array_3.png)
![](./img/std_array_4.png)

- ### E.g.
![](./img/std_array_5.png)

<br>

## Sequence Container - `std::vector`
- ### `emplace_back()` is more efficient than `insert()` because `push_back()` doesn't have to move or copy elements. `insert()` is linear time
![](./img/std_vector.png)
![](./img/std_vector_3.png)
![](./img/std_vector_4.png)
![](./img/std_vector_5.png)
![](./img/std_vector_6.png)

- ### E.g. Initialization & Assignment
![](./img/std_vector_2.png)

- ### E.g. `std::erase()` all even numbers
![](./img/std_vector_7.png)

- ### E.g. `std::back_inserter()`
![](./img/std_vector_8.png)

- ### E.g. `std::transform()`
![](./img/std_vector_9.png)

- ### E.g. `std::insert()`
![](./img/std_vector_10.png)

<br>

## Sequence Container - `std::deque`