#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <strings.h>
#include <unistd.h>


int _putchar(char c);
int _printf(const char *format, ...);
int printf_binary(unsigned int num, int printed);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
#endif
