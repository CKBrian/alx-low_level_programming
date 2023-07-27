# __C - Variadic Functions__

The *0x10-variadic_functions* directory contains C files related to variadic functions tasks. These tasks serve to exploit different  variadic functions concepts such as how to use `va_start`, `va_arg` and `va_end` macros and how to use the `const` type qualifier in function declaration.

## Table of Contents

- [Introduction](#introduction)
- [Files](#files)
- [Task Description](Task-description)
- [How to Use](#how-to-use)
- [Contribution Guidelines](#contribution-guidelines)
- [Licence](#licence)

## Introduction

Variadic functions are functions which take a variable number of arguments which can be of different types[^1]. 

## Files

## Task Description

## How to Use
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
## Licence
This project is for educational purposes and does not require a specific license. It is intended for use as part of an assignment and learning activity and is not open for external distribution or contributions.

[//]: #
	[^1]: article
