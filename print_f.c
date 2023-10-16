#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * _printf - printf function build
 * @format: is a string
 * Return: numbers of char number
 */
int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		int counter = 0, i;
		int (*m)(va_list);
		va_list val;

		va_start(val, format);
		i = 0;
		if (format[0] == '%' && format[1] == '\0')
			return (-1);
		while (format != NULL && format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					counter += _putchar(format[i]);
					i += 2;
				}
				else
				{
					m = detector_func(format[i + 1]);
					if (m)
						counter += m(args);
					else
						counter = _putchar(format[i]) + _putchar(format[i + 1]);
					i += 2;
				}
			}
			else
			{
				counter += _putchar(format[i]);
				i++;
			}
		}
		va_end(val);
		return (counter);
	}
	return (-1);
}
