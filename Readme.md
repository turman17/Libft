
# 42_Libft

## Description

The 42 Libft project is a coding assignment from the 42 Silicon Valley curriculum, designed to have students re-implement some standard C library functions, as well as additional helper functions, which would be used later in the curriculum.

The goal of the project is to understand the fundamental functions in C, their utilization, and the implementation. This exercise allows the students to understand the basic building blocks of coding and programming.

## Functions

The functions in this project can be categorized into several categories: 

1. String Functions - e.g. `ft_strlen`, `ft_strcpy`, `ft_strdup`
2. Character Check Functions - e.g. `ft_isalpha`, `ft_isdigit`
3. Memory Functions - e.g. `ft_memset`, `ft_memcpy`
4. Additional Functions - e.g. `ft_strjoin`, `ft_itoa`

...and more. Please refer to the Libft PDF for the complete list of functions and their behaviors.

## Compilation

The library compiles with a Makefile. To compile, run:

```bash
make
```

To remove objects:

```bash
make clean
```

To remove objects and the library after the objects have been removed:

```bash
make fclean
```

To re-compile:

```bash
make re
```

## Usage

To use the functions in this library, include the header file (`libft.h`) and compile with the library. For example:

```c
#include "libft.h"

int main()
{
    char *str = "Hello, World!";
    ft_putstr(str);
    return (0);
}
```

Compile the program like this:

```bash
gcc -L. -lft main.c -o prog
```

This tells the compiler to look in the current directory for the `libft` library and links it to your program.

## Notes

This code is written in accordance with The Norm (the 42 School's strict coding standards). It's therefore formatted in a specific way and includes only certain C standard library functions.

## Authors and acknowledgment

This project is carried out by 42 students. We acknowledge the pedagogical team for providing us the platform to learn and grow.

## License

This project is licensed under the 42 School Norm. You are free to use and adapt it as long as you respect the license.
```

The specifics of the README might need to be adjusted based on the exact requirements and functions that are implemented. This is a general structure that should be useful in most cases.
