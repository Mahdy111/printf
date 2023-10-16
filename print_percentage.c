#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_percentage - print percentage
 * @val: value given
 * Return: percentage of value
 *
 */
int print_percentage(va_list val)
{
	char *string;

	string = "%";
	if (va_arg(val, int) == *string)
	{
		return (*string);
	}
	return (*string);
}
