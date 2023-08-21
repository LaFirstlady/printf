#include "main.h"
#include <stdbool.h>

void print_buffer(char buffer[], int *buff_ind);

/**
 * -printf - printf function
 *  @format: format
 *  @S: prints the string
 *  Return: 0
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			printed_chars++;
		}
		else
		{
			format++;
			switch(*format)
			{
				case 'c':
					putchar(va_arg(list, int));
					printed_chars++;
					break;
				case 's':
					printed_chars += printf("%s", va_arg(list, char *));
					break;

				case '%':
					putchar('%');
					printed_chars++;
					break;
				case 'd':
				case 'i':
					printed_chars += printf("%d", va_arg(list, int));
					break;
				case 'b':
					{
						num = va_arg(list, unsigned int);
						bin_str[33];

						for (i = 31; i >= 0; i--)
						{
							bin_str[33 - i] = ((num >> i) & 1) + '0';
						}
						bin_str[32] = '\0';

						printed_chars += printf("%s", bin_str);
					}
					break;
				case 'S':
					{
						char *str = va_arg(list, char *);

						for (i = 0; str[i] != '\0'; i++)
						{
							if (str[i] < 32 || str[i] >= 127)
							{
								printed_chars += printf("\\x%02X", (unsigned char)str[i]);
							}
							else
							{
								putchar(str[i]);
								printed_chars++;
							}
						}
					}
					break;
				default:
					putchar('%');
					putchar(*format);
					printed_chars += 2;
					break;
			}
		}
		format++;
	}
	va_end(list);
	return (printed_chars);
}
