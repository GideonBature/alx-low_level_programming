# Hello World!

Covers basic introduction to C programming. Commands to look up:
* `gcc`
* `printf (3)`
* `puts`
* `putchar`

## Learning Objectives:
### 1. General
- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type `gcc main.c`
- What is an entry point
- What is `main`
- How to print text using `printf`, `puts` and `putchar`
- How to get the size of a specific type using the unary operator sizeof
- How to compile using `gcc`
- What is the default program name when compiling with `gcc`
- What is the official C coding style and how to check your code with `betty-style`
- How to find the right header to include in your source code when using a standard library function
- How does the `main` function influence the return value of the program

## Project Requirements
### C
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file at the root of the repo, containing a description of the repository
- A `README.md` file, at the root of the folder of *this* project, containing a description of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use system
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)

### Shell Scripts
- Allowed editors: `vi`, `vim`, `emacs`
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your scripts should be exactly two lines long (`$ wc -l file` should print 2)
- All your files should end with a new line
- The first line of all your files should be exactly `#!/bin/bash`

### More Info
#### Betty Linter
To run the Betty linter just with command `betty <filename>`:
- Go to the [Betty](https://github.com/holbertonschool/Betty) repository
- Clone the repo to your local machine
- `cd` into the Betty directory
- Install the linter with `sudo ./install.sh`
- `emacs` or `vi` a new file called `betty`, and copy the script below:
```
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```
- Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
- Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with` sudo mv betty /bin/` <br>

You can now type `betty <filename>` to run the Betty linter!

## Project Tasks
### 0. Preprocessor
**Description:** Write a script that runs a C file through the preprocessor and save the result into another file.
- The C file name will be saved in the variable `$CFILE`
- The output should be saved in the file `c`

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x00-hello_world` <br>
File: `0-preprocessor` <br>

### 1. Compiler
**Description:** Write a script that compiles a C file but does not link.
- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
  - Example: if the C file is `main.c`, the output file should be `main.o`

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x00-hello_world` <br>
File: `1-compiler` <br>

### 2. Assembler
**Description:** Write a script that generates the assembly code of a C code and save it in an output file.
- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
  - Example: if the C file is `main.c`, the output file should be `main.s`

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x00-hello_world` <br>
File: `2-assembler` <br>

### 3. Name
**Description:** Write a script that compiles a C file and creates an executable named `cisfun`.
- The C file name will be saved in the variable `$CFILE`

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x00-hello_world` <br>
File: `3-name` <br>

### 4. Hello, puts
**Description:** Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.
- Use the function `puts`
- You are not allowed to use `printf`
- Your program should end with the value `0`

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x00-hello_world` <br>
File: `4-puts.c` <br>

### 5. Hello, printf
**Description:** Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.
- Use the function `printf`
You are not allowed to use the function `puts`
Your program should return `0`
Your program should compile without warning when using the `-Wall` `gcc` option

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x00-hello_world` <br>
File: `5-printf.c` <br>

### 6. Size is not grandeur, and territory does not make a nation
**Description:** Write a C program that prints the size of various types on the computer it is compiled and run on.
- You should produce the exact same output as in the example
- Warnings are allowed
- Your program should return `0`
- You might have to install the package `libc6-dev-i386` on your Linux to test the `-m32` `gcc` option

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x00-hello_world` <br>
File: `6-size.c` <br>

### 7. Intel (advanced task)
**Description:** Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
- The C file name will be saved in the variable $CFILE.
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
  - Example: if the C file is `main.c`, the output file should be `main.s`

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x00-hello_world` <br>
File: `100-intel` <br>

### 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity (advanced task)
**Description:** Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.
- You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`
- Your program should return 1
- Your program should compile without any warnings when using the `-Wall` `gcc` option

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x00-hello_world` <br>
File: `101-quote.c` <br>
