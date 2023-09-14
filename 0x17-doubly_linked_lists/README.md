# __C - Doubly linked lists__

This directory contains C files related to doubly linked lists task. The tasks involves implementing C functions that use doubly linked lists.

## Introduction
In this task, we explore the usage of doubly linked lists in C, which allows for a way to create a list that can be traversed in both foward and backward directions.
The tasks involve creating functions that traverse and allow manipulation of a doubly linked lists.

## Files

The following C files are present in this directory:

- __`function_pointers.h`__: Contains prototypes for the functions in the `0-print_name.c`, `1-array_iterator.c` and `2-int_index.c` files.
- __`0-print_name.c`__: Contains a function that prints a name
- __`1-array_iterator.c`__: Contains a function that executes a function given as a parameter on each element of an array.
- __`2-int_index.c`__: Contains a function that searches for an integer.
- __`3-calc.h`__: contain all the function prototypes and data structures used by the calculator program.
- __`3-get_op_func.c`__: Contains a function that selects the correct function to perform the operation asked by the user.
- __`3-op_functions.c`__: Contains a list of the following function `op_add`, `op_sub`, `op_mul`, `op_div`, `op_mod`.
- __`3-main.c`__: contain the main function to call functions necessary to implement the calculator program.

## Usage

Each task file is implemented on a separate C file. To use the C files listed above, you can create a corresponding `main.c` file with the `int main()` function to compile the corresponding program. Alternatively you can compile with the `main.c` files supplied in the *main_files* folder located in the current directory of this README file.
Use the following steps to compile:
1. Use the GNU C Compliler to compile your files as follows:
```sh
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main.c> <file1.c> <file2.c> -o <outputfile>
```
2. Execute the *<outputfile>* binary file as follows:
```sh
$ ./<outputfile> [*optional arguments*]
```
- Example:

```sh
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
$ ./calc 1 + 1
```

## Contribution Guidelines

This project is an individual assignment and not open for external contributions. It is for educational purposes only, and all work should be completed individually as part of the assignment requirements.

## Licence Details

This project is for educational purposes and does not require a specific license. It is intended for use as part of an assignment and learning activity and is not open for external distribution or contributions.
