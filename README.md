# ft_printf

## Description

A C library implementing a custom version of printf(), supporting variadic
arguments and the mandatory format specifiers. The project focuses on string
formatting, number conversion, and character output.

## Instructions

Build the static library with:

`make`

This creates libftprintf.a in the repository root.

Compile the provided test program with (you can ignore the warnings):

`cc main.c libftprintf.a -o test`

Run it with:

`./test`

Use make clean to remove object files, make fclean to remove object files and
the library, and make re to rebuild.
