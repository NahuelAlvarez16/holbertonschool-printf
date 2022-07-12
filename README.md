# My Printf

In this project we have created a function for simple printing and also for printing specific formats. This function works just like the original printf function from the stdio.h library.


# How does it work?
The printf prints a string and substitutes any specific formatting it may have for its assigned contents.

## Examples
Code:
	

	    _printf("Hi!! My name is %s.\n", "Printf");
    	_printf("I have %d letters in my name.\n", 6);
    	_printf("The first letter of my name is %c.\n", 'P');
    ``` _printf("I can convert to binary!! For example, 2123 in binary is %b.\n", 2123);


Output:

    Hi!! My name is Printf.
    I have 6 letters in my name.
    The first letter of my name is P.
    I can convert to binary!! For example, 404 in binary is 110010100.

## Format

| Operator |Description                    |
|----------|-------------------------------|
|    %c    |`Print a char`                 |
|    %s    |`Print a string`               |
|    %S    |`Print a string compatible with non-printable characters`               |
|    %d    |`Print a decimal number`               |
|    %i    |`Print an integer`             |
|    %b    |`Convert a decimal number to binary and print it `               |
|    %u    |`Print an unsigned integer`               |
|    %o    |`Convert a decimal number to octal number and print it`               |
|    %x    |`Convert a decimal number to a hexadecimal number and print it with lowercase letters`  
|    %X    |`Convert a decimal number to a hexadecimal number and print it with uppercase letters`             |


## Function Prototype


    int _printf(const char *format, ...);


## Compiler

To compile this project we use the gcc compiler:

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

##  Flowchart
```mermaid
graph LR
A[Printf]
C["Return (-1)"]
A --> B{!format}--Yes --> C
B --No --> D{"Loop - format && format[i]"}
D --> E{"format[i] == '%'"}
E --Yes --> F["i++"]
F --> G["print_function = get_print_function(format[i])"]
G --> H{print_function}
H --Yes --> I["length += print_function(arg)"]
I --> J["Print argument"]
H --No --> N{"format[i]"} --Yes -->K{"format[i] == '%'"} --Yes --> L["Print '%'"]
N --Yes --> O["print format[i]"]
N --No --> M["Return (-1)"]
E -- No --> P["Print format[i]"]
E --> D
 ```


## Contributors
[Nahuel Alvarez](https://github.com/NahuelAlvarez16) and [Romina Benitez](https://github.com/Blingblinggiirl) from the 18th cohort - Holberton School.

