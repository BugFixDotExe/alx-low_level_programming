#ifndef VA_H
#define VA_H

#include <stdarg.h>
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /*VA_H*/
