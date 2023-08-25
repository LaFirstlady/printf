#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print arguments
 * @i: current index in the format string
 * @list: list of arguments
 *
 * Return: Precision
 */
int get_precision(const char *format, int *i, va_list list)
{
	int precision = -1;

	if (format[*i + 1] != '.')
		return (precision);

	precision = 0;
	(*i)++;

	while (is_digit(format[*i]))
	{
		precision = precision * 10 + format[*i] - '0';
		(*i)++;
	}

	if (format[*i] == '*')
	{
		(*i)++;
		precision = va_arg(list, int);
	}

	return (precision);
}
