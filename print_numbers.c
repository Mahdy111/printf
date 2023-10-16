#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_decimal - prints a decimal
 * @val: number0.0
 * Return: printed num
 */
int print_decimal(va_list val)
{

	unsigned int abs, auto, co, counter;
	int n;

	counter = 0;
	n = va_arg(val, int);
		if (n < 0)
		{
			abs = (n * -1);
			counter += _putchar('-');
		}
		else
			abs = n;

	auto = abs;
	co = 1;
	while (auto > 9)
	{
		auto /= 10;
		co *= 10;
	}
	while (co >= 1)
	{
		counter += _putchar(((abs / co) % 10) + '0');
		co /= 10;
	}
	return (counter);
}
/**
 * print_integer - print integer number
 * @val: integer data
 * Return: using decimal funcction
 */

int print_integer(va_list val)
{
	return (print_decimal(val));
}
