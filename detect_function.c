#include "main.h"

/**
 * detect_fun - choose the function will be used
 * @choose: var to choose func
 * Return: the function
 */
int (*detect_fun(char choose))(va_list)
{
	int i = 0;
	spec arr[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percentage},
		{"d", print_decimal},
		{"i", print_integer},
		{NULL, NULL}
	};
	while (arr[i].valid)
	{
		if (choose == arr[i].valid[0])
			return (arr[i].f);
		i++;
	}
	return (NULL);
}
