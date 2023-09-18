#include "main.h"

/**
 * _printf - function that produces
 *  output according to a format.
 * @format: format to use.
 * Return: formated output.
*/

int _printf(const char *format, ...)
{
	int count = 0;
	va_list lists;

	va_start(lists, format);


	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 's')
			{
				char *str = va_arg(lists, char *);

				int str_len = 0;

				while (str[str_len] != '\0')
					str_len++;
				write (1, str, str_len);
				count++;
			}
			else if (*format == 'c')
			{
				char ch = va_arg(lists, int);

				putchar(ch);
				return (count + 1);
			}
		}
		else
			{
				putchar(*format);
				count++; }
		format++;
	}
	va_end(lists);
	return (count);
}
