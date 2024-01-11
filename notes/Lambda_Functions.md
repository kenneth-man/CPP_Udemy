https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/27255950#overview

## Lambda Functions and Function Objects
- ### ***Function Objects*** = A Class that overloads the function call operator `()`
	- ### Can create an instance and call it like a function using `()`
- ### ***Lambda Functions*** = An anonymous Function Object
![](./img/function_objects.png)
![](./img/function_objects_2.png)
- ### Same as above
![](./img/function_objects_3.png)

<br>

- ### E.g. Generic Function Object Class/Struct
![](./img/function_objects_4.png)
![](./img/function_objects_5.png)
![](./img/function_objects_6.png)

<br>

## Stateless Lambda Functions
![](./img/lambda.png)
- ### Function call operator `()` instantiates a function object from the lambda expression
![](./img/lambda_2.png)

<br>

![](./img/lambda_3.png)

<br>

- ### Assign the lambda function to a variable, then use function call operator `()`
![](./img/lambda_4.png)
![](./img/lambda_5.png)

<br>

- ### Optional explicit type return
![](./img/lambda_6.png)

<br>

- ### E.g. Lambda as function parameters
![](./img/lambda_9.png)

<br>

- ### E.g. Returning a lambda (3 ways)
![](./img/lambda_10.png)

<br>

- ### E.g. Predicate Lambda
	- ### ***Predicate*** = A function that takes any number of arguments and returns a boolean value
![](./img/lambda_11.png)

<br>

- ### E.g. More examples...
![](./img/lambda_12.png)

<br>

## Stateful Lambda Functions
- ### A lambda function with a non-empty ***Capture List***
- ### ***Closure*** = Any function, anonymous or not, that captures variables from the environment they are defined in
![](./img/lambda_14.png)

<br>

- ### Capture by value - Cannot modify the captured variable
![](./img/lambda_15.png)

<br>

- ### `Mutable` - Can modify the captured variable; original is unchanged
![](./img/lambda_16.png)

<br>

- ### Capture by reference - Can modify the captured variable; original is changed
![](./img/lambda_17.png)

<br>

- ### Default captures - Applies to all variables in capture list; Must be first in the capture list
![](./img/lambda_18.png)
![](./img/lambda_19.png)

<br>

## Lambda Function with STL more examples
- ### `Unary Predicate` = Predicate function that takes one argument
- ### `Binary Predicate` = Predicate function that takes two arguments

<br>

- ### E.g.
![](./img/lambda_20.png)

![](./img/lambda_21.png)