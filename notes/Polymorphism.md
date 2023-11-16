## What is Polymorphism?
![](./img/polymorphism.png)

### C++ uses static binding by default
- ### "Compile time/static binding" = before the program executes
- ### "Run time/dynamic binding" = while the program executes

<br>

![](./img/polymorphism_2.png)

![](./img/polymorphism_3.png)

![](./img/polymorphism_4.png)

![](./img/polymorphism_5.png)

<br>

### Dynamic Binding example - Using Base (Top-most Parent) Class pointers
![](./img/base_class_pointer.png)

![](./img/base_class_pointer_2.png)

![](./img/base_class_pointer_3.png)

<br>

## Virtual functions
- ### Enables drived classes methods to be dynamically bound
- ### When virtual functions are overridden in derived classes, it will be bound dynamically at runtime if we use a base class pointer or reference
![](./img/virtual_functions.png)

![](./img/virtual_functions_2.png)

### Example:
![](./img/virtual_functions_3.png)

<br>

## Virtual destructors
![](./img/virtual_destructors.png)

![](./img/virtual_destructors_2.png)

<br>

## Override specifier
![](./img/override_specifier.png)

### e.g. Not actually overriding

![](./img/override_specifier_2.png)

![](./img/override_specifier_3.png)

### e.g. Actually overriding

![](./img/override_specifier_4.png)

<br>

