<div align=center>  
    <img  
    style="text-align:center"  
    src="https://raw.githubusercontent.com/coding-max/hbtn_config/main/assets/hbtn_logo_low.png"  
    alt="Holberton School"/>  
    <h1 align="center"> printf </h1>  
</div>

## Description

The **_printf** function emulates functionality of the C standard library function printf, writing output to standard output.  
The function uses a string *format* where the data to print is indicated, followed by the arguments to be printed (**_printf** use variadic functions to allow a custom number of arguments). 

Prototype: ``int _printf(const char *format, ...);``

Return Value: if the function is executed correctly, it returns the number of characters printed (not counting the null character). If something goes wrong, it returns -1.

<br>

## Use

General call of `_printf` function:  
``_printf("format", var1, var2, ...);``

#### Examples:

* String without arguments: ``_printf("Let's try to printf a sentence.");``
    * Output: *Let's try to printf a sentence.*
* Basic use with string and char specifier: ``_printf("%s%c", "I am a string", '!');``
    * Output: *I am a string!*
* Print some numbers: ``_printf("the square root of %i is %d", 15625, 125);``
    * Output: *the square root of 15625 is 125*

In this way you can use and mix different specifiers accepted by the **_printf** function.

<br>

## Specifiers

Specification characters are the main component of the **_putchar** function.
The char **'%'** is used followed by a character that indicates the type of data to be printed.
The specification character is placed in the *format* string and the data to be printed is placed as an argument of the function.

| Specifier | Description                                       |
|-----------|---------------------------------------------------|
| %c        | Prints a character.                               |
| %s        | Prints a string.                                  |
| %r        | Prints a string in reverse.                       |
| %R        | Prints a string in rot13 encryption.                                          |          |
| %i or %d  | Prints an int number.                             |
| %u        | Prints an unsigned int number.                    |
| %b        | Prints an unsigned int number in binary notation. |
| %o        | Prints an unsigned int number in octal notation. |
| %x        | Prints an unsigned int number in hexadecmal notation (lowercase). |
| %X        | Prints an unsigned int number in hexadecmal notation (uppercase). |
| %%        | Prints the **'%'** char.                   |

<br>

## Compilation

The **_printf** function was coded on an Ubuntu 14.04 LTS machine with gcc version 4.8.4.

The code compile with ``gcc -Wall -Werror -Wextra -pedantic *.c`` command, also it's necessary add a main file that calls the function.

<br>

## Files

- holberton.h
- _printf.c
- _putchar.c
- print_str.c
- print_num.c
- print_hex.c
- print_rot13.c
- man_3_printf
- test/
    - test_collection

## Authors

Maximiliano Pan & Rodolfo Delgado.