#include "main.h"

/**
 * get_width - Calculates width for printing
 * @format: Formatted string in which to print arguments
 * @i: current index in format string
 * @list: List of arguments
 *
 * Return: Width
 */
int get_width(const char *format, int *i, va_list list)
{
	int width = 0;

	while (is_digit(format[*i]))
	{
		width = width * 10 + (format[*i] - '0'0);
		(*i)++;
	}

	if (format[*i] == '*')
	{
		(*i)++;
		width = va_arg(list, int);
	}

	return (width);
}
