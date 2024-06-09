# 0x05. C - Pointers, arrays and strings

## Resources

### Read or watch:

- [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
- [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
- [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
- [Memory Layout](https://aticleworld.com/memory-layout-of-c-program/)

### Additional Resource

- [Arrays & Pointers in C Programming Explained](https://www.youtube.com/watch?feature=shared&v=bT5GTqZaYTk)

### Learning Objectives

- What are pointers and how to use them
    Pointers are variables that stores the addresses of another variables.
    It can be used by using an astyrisk (`*`) between the variable type
    and the variable name when we declare a variable, i. e. `char *name;`.
    > Note: when it's used as an expression it's called deferencing a pointer,
    > and it behaves differently. it allows us to manipulate/modify the data
    > the pointer points to in the memory.
- What are arrays and how to use them
    Arrays are a contiguous memory areas that hold a number of values of the same type.
    There are two ways to use arrys either using sqaure brackets after the variable name,
    i. e. `char name[] = "Youssef Hassan";`, or using pointers but keep in mind
    both behave differently.
- What are the differences between pointers and arrays
    | Feature | Array | Pointer |
    | --- | --- | --- |
    | What it stores | Collection of elements | Memory address of another variable |
    | Data type of elements | Same data type for all elements | Any data type |
    | Access method | Direct access using index | Indirect access using dereferencing |
    | Size | Fixed size (determined at compile time) | Flexible size (pointer itself has a fixed size based on architecture) |
    | Memory allocation | Contiguous memory allocationk | Dynamic memory allocation possible |
- How to use strings and how to manipulate them
    **C** doesn't have a built-in _String_ type, Strings in C language are nothing but array
    of characters. i. e. `char name[] = "Youssef Hassan";`
- Scope of variables
    | Feature | Global Scope | Local Scope |
    | --- | --- | --- |
    | Declaration | Outside any function | Inside a function |
    | Accessibility | Accessible from any function | Accessible only within the function |
    | Lifetime | Exists throughout program execution | Created when function called, destroyed when function returns |
