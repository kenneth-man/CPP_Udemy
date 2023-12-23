https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/10563444#questions

## Standard Template Library (STL)
- ### Library of reusable classes, functions, data structures and algorithms
- ### Implemented using C++ templates
![](./img/stl.png)

- ### Containers (Sequence, Associative, Adapters)
- ### Algorithms
- ### Iterators (Input, Output, Forward, Bidirectional, Random Access)
![](./img/stl_2.png)
![](./img/stl_3.png)
![](./img/stl_4.png)

<br>

## Generic Programming
- ### Allowing the same code to be used with different data types; e.g. an int, double or float for a function argument
- ### We can write generic code using macros, class templates and function templates
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

<br>

