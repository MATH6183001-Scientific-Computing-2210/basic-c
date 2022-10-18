# 01-printf-datatype

You can start with a typical hello world like [Hello World in C](https://en.wikipedia.org/wiki/%22Hello,_World!%22_program#C).
However, let's do a simple math operation and print the result out to the standard output, e.g., *stdout* in Linux.

## How to

1. compile
    ```sh
    gcc -o main.out main.c
    ```

    Note: if you're not comfortable with the compilation process, please review [basic-compilation-using-gcc](https://github.com/MATH6183001-Scientific-Computing-2210/basic-compilation-using-gcc).
2. Execute
    ```sh
    ./main.out
    ```

    You should see the following printed in your terminal.
    ```
    10 + 13 = 23
    ```


## Necessary Knowledge

### Data types

Table below showing important data types in C (not an exhaustive list of course, but suffice).

![data type table](https://cdn.techbeamers.com/wp-content/uploads/2019/01/C-Datatypes-Range-and-Sizes.png)

### stdio.h
In order to print characters to stdout, you can use stdio.h.
In the header library, there are many functions (see [func ref](https://en.wikibooks.org/wiki/C_Programming/stdio.h/Function_reference)).
One of them is `printf`.
At this stage and as an example, an easy way to use it as follows.

![printf prototype](https://upload.wikimedia.org/wikipedia/commons/2/2c/Printf.svg "printf prototype")
or open [this](https://upload.wikimedia.org/wikipedia/commons/2/2c/Printf.svg)

The notation `%` is called a format specifier. 
Below is a table showing list of format specifiers and data types.

![table format specifier](https://i0.wp.com/masterprograming.com/wp-content/uploads/2019/09/format-specifiers-in-c-language.jpg "table format specifier")

### Basic rules

- C is a static type language.
    It means that you need to define a data type for a variable.

- C is also a case-sensitive language.
- A statement in C must be ended with the semicolon character, i.e., `;`

