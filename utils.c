#include "main.h"

/**
 * is_printable - Evaluates if a char is printable
 * @c: Char to be evaluated
 *
 * Return: 1 if c is printable, 0 otherwise
 */
int is_printable(char c)
{
	return (c >= 32 && c < 127);
}


/**
 * append_heax_code - Append ascci in hexadecimal code to buffer
 * @buffer: Array of chars
 * @i: Index at which to start appending
 * @ascii_code: ASCII CODE
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	static const char *map_to = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';
	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}


/**
 * is_digit - Verifies if a char is a digit
 * @c: char to be evaluated
 *
 * Return: 1 if c is a digit, 0 otherise
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}


/**
 * conver_size_number - Casts a number to the specified size
 * @num: number to be casted
 * @size: number indicating type to be cast
 *
 * Return: casted value of num
 */
long int convert_size_number(long int num, int size)
{
	switch (size)
	{
		case S_LONG:
			return (num);
		case S_SHORT:
			return ((short)num);
		default:
			return ((int)num);
	}
}


/**
 * convert_size_unsgnd - casts a number to specific size
 * @num: number to be cast
 * @size: number indincating the type to be cast
 *
 * Return: cast value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	switch (size)
	{
		case S_LONG:
			return (num);
		case S_SHORT:
			return ((unsigned short)num);
		default:
			return ((unsigned int)num);
	}
}
