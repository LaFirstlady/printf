#include "main.h"

/**
 * is_printable - Evaluates if a char is printable
 * @c: Char to be evaluated
 *
 * Return: 1 if c is printable, 0 otherwise
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
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
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;
	buffer[i++] = '\\';
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
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
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
	if (size == S_LONG)
		return ((short)num);

	return ((int)num);
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
	if (size == S_LONG)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
