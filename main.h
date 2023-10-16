
#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H
#include<stdarg.h>
#include<stdio.h>
#include<string.h>

/**
*struct format - structure specifier
*@pointer: ch value
*@det_fun: a fun
**/
typedef struct format
{
char *pointer;
int (*det_fun)(va_list);
} detect;
int _putchar(char c);
int print_char(va_list val);
int print_string(va_list val);
int print_integer(va_list val);
int print_decimal(va_list val);
int print_percentage(va_list val);
int (detect_fun(char choose))(va_list);
int _printf(const char *format, ...);
#endif
