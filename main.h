#ifndef MAIN_H
#define MAIN_H
#include<stdarg.h>
#include<stdio.h>
#include<string.h>
/**
 * struct format - match the conversion specifiers for printf
 *@pointer: type char pointer of the specifier
 * @detect_fun: type pointer to function for the conversion specifier
 *
 */
typedef struct format
{
char *pointer;
int (*detect_fun)();
} detect;
int _putchar(char val);
int print_char(va_list val);
int print_string(va_list val);
int print_decimal(va_list args);
int print_interger(va_list args);
#endif

