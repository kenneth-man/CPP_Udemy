https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535526#questions

## Pointers
### A variable that stores a memory address as its value
![](./img/pointers.png)

![](./img/pointers_2.png)

### If you don't initialize a pointer, it will point to a random memory location

### e.g.
```
// Equivalent

int *myPtr;
char* myPtr2;
```

<br>

### e.g.
```
// Initializing pointer variables to 'no-where' (address 0)

int *myPtr {};
string *myPtr2 {nullptr};
```

<br>

![](./img/pointers_4.png)

![](./img/pointers_5.png)

![](./img/pointers_6.png)

![](./img/pointers_7.png)

<br>

## Dereferencing Pointers
### Get the value of the address a pointer is pointing to and can modify it by reassigning
### (B) !!! **Pointer** and **Dereferenced Pointer** are different but share the same operator `*`. Pointer is during variable declaration
![](./img/dereferencing_pointer.png)

![](./img/dereferencing_pointer_2.png)

![](./img/dereferencing_pointer_3.png)

<br>

## Pointers to Constants
### Memory address value can be modified, but not the Dereferenced value
![](./img/pointers_to_constants.png)

<br>

## Constant Pointers
### Dereferenced value can be modified, but not the Memory address value
![](./img/constant_pointers.png)

<br>

## Constant Pointers to Constants
### Neither the Dereferenced value or Memory address value can be modified
![](./img/constant_pointer_to_constants.png)

<br>

## Dynamic Memory Allocation
![](./img/dynamic_memory_allocation.png)

### Use `new` to allocate memory (on the heap) at runtime
![](./img/dynamic_memory_allocation_2.png)

### When finished using the memory, must deallocate using `delete` (which calls the destructor of that class), making the memory available to use again
![](./img/dynamic_memory_allocation_3.png)

### Allocating and deallocating memory for an array
![](./img/dynamic_memory_allocation_4.png)
![](./img/dynamic_memory_allocation_5.png)

<br>

## Pointer Arithmetic
![](./img/pointer_arithmetic.png)

![](./img/pointer_arithmetic_2.png)

![](./img/pointer_arithmetic_3.png)

![](./img/pointer_arithmetic_4.png)

### Below - Both return the same output
![](./img/pointer_arithmetic_5.png)

<br>

## Pass by Reference with Pointers or Memory Addresses
### In order to pass-by-reference with a pointer, the function must expect a pointer as a parameter and we must pass in an address of some variable that is of the same type

### So instead of creating a pointer then passing that pointer into the function, we can also "create" a pointer by passing an address as the argument

### When using pass-by-reference with (&) in the parameter, we do **NOT** need to explicitly take the address of the variable when we call the function. The compiler will automatically do that for us. However, when we have a pointer in the parameter, then we **MUST** explicitly pass in the address ourselves

### In C++ passing a pointer by reference is not often seen. This is sometimes done when the programmer wants to change the pointer being passed in, not just the data the pointer points to

![](./img/pass_by_reference_w_pointers.png)

![](./img/pass_by_reference_w_pointers_2.png)

<br>

## Return a Pointer (return a memory address)
![](./img/return_pointers.png)

![](./img/return_pointers_2.png)

![](./img/return_pointers_3.png)

<br>

## Return dynamically allocated memory
![](./img/return_dynamically_allocated_memory.png)

![](./img/return_dynamically_allocated_memory_2.png)

<br>

## When to use Pointer vs Reference parameters

| Parameter | Function Modifies the Parameter? | Parameter can be `nullptr`? | Notes |
| :-: | :-: | :-: | :-: |
| Pass By Value (Default) | Y | N | Parameter size is small; arbitrary performance loss if copied |
| Pass By Reference using a Pointer | Y | Y | Parameter is expensive to copy |
| Pass By Reference using a Pointer to `const` | N | Y | Parameter is expensive to copy |
| Pass By Reference using a `const` Pointer to `const` | N | Y | <ul><li>Parameter is expensive to copy</li><li>Don't need to modify the Pointer</li></ul> |
| Pass By Reference using a Reference | Y | N | Parameter is expensive to copy |
| Pass By Reference using a `const` Reference | N | N | Parameter is expensive to copy |

<br>

<hr>

<br>

https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9610510#questions

## Smart Pointers
- ### Raw pointers gives us flexibility to manage memory ourselves (allocation, deallocation, lifetime management).
	- ### But there are some dangers with raw pointers, that smart pointers can avoid...
		- ### **Memory leaks** = memory which is no longer needed is not released, reducing the amount of usable memory (reduces performance)
		- ### **Uninitialized (wild) pointers** = pointing to anywhere in memory
		- ### **Dangling pointers**	= pointing to memory that has been freed/deleted
		- ### **Not exception safe** = Our program could throw an exception and the code that releases the memory may not execute

- ### Use `std::unique_ptr` in most cases

<br>

![](./img/smart_pointers.png)

- ### The smart pointer is on the stack and the memory that it is pointing to is on the heap

- ### Can't do pointer arithmetic with smart pointers, like you can with raw pointers

<br>

- ## **RAII** = Resource Acquisition Is Initialization
![](./img/smart_pointers_2.png)

- ### Smart pointers are examples of **RAII** classes, since they follow **RAII** in regards to memory resources

<br>

## `std::unique_ptr`
- ### IMPORTANT - cannot copy (e.g.
	- ### ❌ Copy constructor
	- ### ❌ Pass by value
	- ### ❌ Reassign (but can `std::move()`))

![](./img/unique_ptr.png)

![](./img/unique_ptr_2.png)

- ### More efficeint way to initialize a `unique_ptr` since C++14
![](./img/unique_ptr_2b.png)

- ### `.get()` returns a pointer to the object
- ### `.reset()` deletes the object and sets the pointer to `nullptr`
![](./img/unique_ptr_3.png)

![](./img/unique_ptr_4.png)

- ### `std::move()`
	- ### `ptr` gives up ownership of the pointer to `vec`
	- ### `ptr` is set to `nullptr`
![](./img/unique_ptr_5.png)

<br>

## `std::shared_ptr`
- ### Copies are of the pointer, not the memory on the heap
![](./img/shared_ptr.png)

![](./img/shared_ptr_2.png)

![](./img/shared_ptr_3.png)

![](./img/shared_ptr_4.png)

![](./img/shared_ptr_5.png)

- ### More efficeint way to initialize a `shared_ptr` since C++11
![](./img/shared_ptr_6.png)

<br>

## `std::weak_ptr`
![](./img/weak_ptr.png)

![](./img/weak_ptr_2.png)

- ### `weak_ptr` solves the ***"Circular Reference"*** problem:
	- ### `shared_ptr` can cause a memory leak if two objects are pointing to each other
		- ### The pointers will be destroyed from the stack when they go out of scope, but the memory on the heap will not be freed
		- ### `A` keeps `B` alive, and `B` keeps `A` alive
		- ### ***'chicken and egg'***

- ### E.g. (Circular Reference - Destructors are not called)
![](./img/weak_ptr_4.png)

![](./img/weak_ptr_3.png)

<br>

## Custom deleters
- ### A function that accepts a raw pointer and deletes it at the end of the function body
- ### Called when a smart pointer is deleted (goes out of scope)

![](./img/custom_deleters.png)

![](./img/custom_deleters_2.png)

![](./img/custom_deleters_3.png)