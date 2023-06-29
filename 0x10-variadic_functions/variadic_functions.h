#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdarg.h>

typedef struct print_cifs
{
	char alphabet;
	void (*print)(va_list arg);
} print_t;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif