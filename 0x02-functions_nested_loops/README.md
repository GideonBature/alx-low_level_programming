# C - Functions & Nested Loops
## Learning Objectives:
### 1. What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the `gcc` flags `-Wall -Werror -pedantic -Wextra -std=gnu89`
- What are header files and how to to use them with `#include`

## Project Requirements
### General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use [\_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t - have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file

## Project Tasks
### 0. \_putchar
**Description:** Write a program that prints `_putchar`, followed by a new line.
- The program should return `0`

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x02-functions_nested_loops` <br>
File: `0-putchar.c` <br>

### 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
**Description:** Write a function that prints the alphabet, in lowercase, followed by a new line.
- Prototype: `void print_alphabet(void);`
- You can only use `_putchar` twice in your code

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x02-functions_nested_loops` <br>
File: `1-alphabet.c` <br>

### 2. 10 x alphabet
**Description:** Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
- Prototype: `void print_alphabet_x10(void);`
- You can only use `_putchar` twice in your code

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x02-functions_nested_loops` <br>
File: `2-print_alphabet_x10.c` <br>

### 3. islower
**Description:** Write a function that checks for lowercase character.
- Prototype: `int _islower(int c);`
- Returns `1` if `c` is lowercase
- Returns `0` otherwise

FYI: The standard library provides a similar function: `islower`. Run `man islower` to learn more.

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x02-functions_nested_loops` <br>
File: `3-islower.c` <br>

### 4. isalpha
**Description:** Write a function that checks for alphabetic character.
- Prototype: `int _isalpha(int c);`
- Returns `1` if `c` is a letter, lowercase or uppercase
- Returns `0` otherwise

FYI: The standard library provides a similar function: `isalpha`. Run `man isalpha` to learn more.

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x02-functions_nested_loops` <br>
File: `4-isalpha.c` <br>

### 5. Sign
**Description:** Write a function that prints the sign of a number.

Prototype: `int print_sign(int n);`
Returns `1` and prints `+` if `n` is greater than zero
Returns `0` and prints `0` if `n` is zero
Returns `-1` and prints `-` if `n` is less than zero

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x02-functions_nested_loops` <br>
File: `5-sign.c` <br>

### 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
**Description:** Write a function that computes the absolute value of an integer.
- Prototype: `int _abs(int);`

FYI: The standard library provides a similar function: `abs`. Run `man abs` to learn more.

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x02-functions_nested_loops` <br>
File: `6-abs.c` <br>

### 7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important
**Description:** Write a function that prints the last digit of a number.
- Prototype: `int print_last_digit(int);`
- Returns the value of the last digit

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x02-functions_nested_loops` <br>
File: `7-print_last_digit.c` <br>

### 8. I'm federal agent Jack Bauer, and today is the longest day of my life
**Description:** Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
- Prototype: `void jack_bauer(void);`

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x02-functions_nested_loops` <br>
File: `8-24_hours.c` <br>

### 9. Learn your times table
**Description:** Write a function that prints the 9 times table, starting with 0.
- Prototype: `void times_table(void);`
- Format: see example:
```
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table
julien@ubuntu:~/0x02$ ./9-times_table | cat -e
0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
0,  9, 18, 27, 36, 45, 54, 63, 72, 81$
julien@ubuntu:~/0x02$ ./9-times_table | tr ' ' . | cat -e
0,..0,..0,..0,..0,..0,..0,..0,..0,..0$
0,..1,..2,..3,..4,..5,..6,..7,..8,..9$
0,..2,..4,..6,..8,.10,.12,.14,.16,.18$
0,..3,..6,..9,.12,.15,.18,.21,.24,.27$
0,..4,..8,.12,.16,.20,.24,.28,.32,.36$
0,..5,.10,.15,.20,.25,.30,.35,.40,.45$
0,..6,.12,.18,.24,.30,.36,.42,.48,.54$
0,..7,.14,.21,.28,.35,.42,.49,.56,.63$
0,..8,.16,.24,.32,.40,.48,.56,.64,.72$
0,..9,.18,.27,.36,.45,.54,.63,.72,.81$
julien@ubuntu:~/0x02$ 
```

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x02-functions_nested_loops` <br>
File: `9-times_table.c` <br>

### 10. a + b
**Description:** Write a function that adds two integers and returns the result.
- Prototype: `int add(int, int);`

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x02-functions_nested_loops` <br>
File: `10-add.c` <br>

### 11. 98 Battery Street, the OG
**Description:** Write a function that prints all natural numbers from `n` to `98`, followed by a new line.
- Prototype: `void print_to_98(int n);`
- Numbers must be separated by a comma, followed by a space
- Numbers should be printed in order
- The first printed number should be the number passed to your function
- The last printed number should be `98`
- You are allowed to use the standard library

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x02-functions_nested_loops` <br>
File: `11-print_to_98.c` <br>

### 12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself (advanced task)
**Description:** Write a function that prints the `n` times table, starting with 0.
- Prototype: `void print_times_table(int n);`
- If `n` is greater than `15` or less than `0` the function should not print anything
- Format: see example:
```
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 100-main.c 100-times_table.c -o 100-times_table
julien@ubuntu:~/0x02$ ./100-times_table 
0,   0,   0,   0
0,   1,   2,   3
0,   2,   4,   6
0,   3,   6,   9

0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5
0,   2,   4,   6,   8,  10
0,   3,   6,   9,  12,  15
0,   4,   8,  12,  16,  20
0,   5,  10,  15,  20,  25


0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12
0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24
0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36
0,   4,   8,  12,  16,  20,  24,  28,  32,  36,  40,  44,  48
0,   5,  10,  15,  20,  25,  30,  35,  40,  45,  50,  55,  60
0,   6,  12,  18,  24,  30,  36,  42,  48,  54,  60,  66,  72
0,   7,  14,  21,  28,  35,  42,  49,  56,  63,  70,  77,  84
0,   8,  16,  24,  32,  40,  48,  56,  64,  72,  80,  88,  96
0,   9,  18,  27,  36,  45,  54,  63,  72,  81,  90,  99, 108
0,  10,  20,  30,  40,  50,  60,  70,  80,  90, 100, 110, 120
0,  11,  22,  33,  44,  55,  66,  77,  88,  99, 110, 121, 132
0,  12,  24,  36,  48,  60,  72,  84,  96, 108, 120, 132, 144
julien@ubuntu:~/0x02$ ./100-times_table | tr ' ' . | cat -e
0,...0,...0,...0$
0,...1,...2,...3$
0,...2,...4,...6$
0,...3,...6,...9$
$
0,...0,...0,...0,...0,...0$
0,...1,...2,...3,...4,...5$
0,...2,...4,...6,...8,..10$
0,...3,...6,...9,..12,..15$
0,...4,...8,..12,..16,..20$
0,...5,..10,..15,..20,..25$
$
$
0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0$
0,...1,...2,...3,...4,...5,...6,...7,...8,...9,..10,..11,..12$
0,...2,...4,...6,...8,..10,..12,..14,..16,..18,..20,..22,..24$
0,...3,...6,...9,..12,..15,..18,..21,..24,..27,..30,..33,..36$
0,...4,...8,..12,..16,..20,..24,..28,..32,..36,..40,..44,..48$
0,...5,..10,..15,..20,..25,..30,..35,..40,..45,..50,..55,..60$
0,...6,..12,..18,..24,..30,..36,..42,..48,..54,..60,..66,..72$
0,...7,..14,..21,..28,..35,..42,..49,..56,..63,..70,..77,..84$
0,...8,..16,..24,..32,..40,..48,..56,..64,..72,..80,..88,..96$
0,...9,..18,..27,..36,..45,..54,..63,..72,..81,..90,..99,.108$
0,..10,..20,..30,..40,..50,..60,..70,..80,..90,.100,.110,.120$
0,..11,..22,..33,..44,..55,..66,..77,..88,..99,.110,.121,.132$
0,..12,..24,..36,..48,..60,..72,..84,..96,.108,.120,.132,.144$
julien@ubuntu:~/0x02$ 
```

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x02-functions_nested_loops` <br>
File: `100-times_table.c` <br>

### 13. Nature made the natural numbers; All else is the work of women (advanced task)
**Description:** If we list all the natural numbers below `10` that are multiples of `3` or `5`, we get `3`, `5`, `6` and `9`. The sum of these multiples is `23`. Write a program that computes and prints the sum of all the multiples of `3` or `5` below `1024` (excluded), followed by a new line.
- You are allowed to use the standard library

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x02-functions_nested_loops` <br>
File: `101-natural.c` <br>

### 14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A (advanced task)
**Description:** Write a program that prints the first 50 Fibonacci numbers, starting with `1` and `2`, followed by a new line.
- The numbers must be separated by comma, followed by a space `, `
- You are allowed to use the standard library

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x02-functions_nested_loops` <br>
File: `102-fibonacci.c` <br>

### 15. Even Liber Abbaci
**Description:** Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with `1` and `2`, the first 10 terms will be: `1, 2, 3, 5, 8, 13, 21, 34, 55, 89`. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.
- You are allowed to use the standard library

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x02-functions_nested_loops` <br>
File: `103-fibonacci.c` <br>

### 16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+ (advanced task)
**Description:** Write a program that finds and prints the first 98 Fibonacci numbers, starting with `1` and `2`, followed by a new line.
- The numbers should be separated by comma, followed by a space `, `
- You are allowed to use the standard library
- You are not allowed to use any other library (You can’t use `GMP` etc…)
- You are not allowed to use `long long`, `malloc`, pointers, arrays/tables, or structures
- You are not allowed to hard code any Fibonacci number (except for `1` and `2`)

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x02-functions_nested_loops` <br>
File: `104-fibonacci.c` <br>
