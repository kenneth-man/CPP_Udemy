https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535642#questions

## Inheritance
![](./img/inheritence.png)

### **'is a'**, Generalization, Specialization, Inheritance
![](./img/inheritence_2.png)

### e.g. A student **'is a'** person, but not an employee; administrator **'is a'** person and an employee
![](./img/inheritence_3.png)

### When a child (derived) instance is created, it's parent class constructor executes before the child constructor

### When a child instance is destroyed, the child destructor executes before the parent destructor

![](./img/inheritence_c_d.png)

![](./img/inheritence_c_d_2.png)

<br>

## Inheritance vs Composition
### Consider using composition first, then inhieritance if it makes sense as inhertiance increase complexity
![](./img/inheritence_vs_composition.png)

![](./img/inheritence_vs_composition_2.png)

![](./img/inheritence_vs_composition_3.png)

<br>

## Inheritance Syntax
### If an 'access specifier' is not defined, it is `private` by default
![](./img/inheritence_syntax.png)

### How `public`, `private` and `protected` extensions affect class members

![](./img/inheritence_syntax_2.png)

![](./img/inheritence_syntax_3.png)

![](./img/inheritence_syntax_4.png)

<br>

## Choosing the base class constructor to be called before the derived class constructor
### Base class no-args (default) constructor is called automatically if not specified after a derived constructor

### To initialize a derived object, it's constructor must ensure it's base class is also initialized (The base class may have private member variables, which cannot be accessed from the derived class). Invoke the base-class constructor in the initialization list of the derived constructor:
![](./img/choosing_base_class_constructor.png)

### e.g.
![](./img/choosing_base_class_constructor_2.png)

![](./img/choosing_base_class_constructor_3.png)

![](./img/choosing_base_class_constructor_4.png)

<br>

## Copy, Move Constructors and Overloaded operators with Inheritence
![](./img/copy_move_overloaded_inheritence.png)

# TBC

<br>

## Override Methods
### Derived classes can override base class methods (must have same name and declaration)
![](./img/override.png)

<br>

## Static Binding
### Compiler determines which methods are called based on what it sees at compile time
### Static binding is the default in C++
![](./img/static_binding.png)

<br>

## Dynamic Binding
### ...

<br>

## Multiple Inheritance
![](./img/multiple_inheritence.png)