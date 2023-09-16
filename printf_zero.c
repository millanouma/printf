#include "main.h"
/**
 * _printf - function that produces output
 * according to a format.
 * @format - the format to use
 *
 * Return - format output.
 *
 */
int _printf(const char *format, ...)
{
	int format_print = 0;

	va_list lists;

	va_start(lists, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			format_print = selector(format, lists, format_print);
			format++;
		}
		else
		{
			_putchar(*format);
			format_print++;
			format++;
		}
	}
	va_end(lists);
	return (format_print);
}
