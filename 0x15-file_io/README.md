# __C - File I/O__


- [Introduction](#introduction)
- [Files](#files)
- [Task Description](Task-description)
- [How to Use](#how-to-use)
- [Contribution Guidelines](#contribution-guidelines)
- [Licence](#licence)

## Introduction


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
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a
$ ./a
```
## Contribution Guidelines
This project is an individual assignment and not open for external contributions. It is for educational purposes only, and all work should be completed individually as part of the assignment requirements.
## Licence
This project is for educational purposes and does not require a specific license. It is intended for use as part of an assignment and learning activity and is not open for external distribution or contributions.

[//]: #
	[^1]: article
