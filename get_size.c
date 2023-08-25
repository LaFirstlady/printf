#include "main.h"

#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print arguments
 * @i: current index in format string
 *
 * Return: precision
 */
int get_size(const char *format, int *i)
{
	int size = 0;

	switch (format[*i + 1])
	{

		case 'l':
			size = S_LONG;
			(*i)++;
			break;
		case 'h':
			size = S_SHORT;
			(*i)++;
			break;
		default:
			break;
	}

	return (size);
}
