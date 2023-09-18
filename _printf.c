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

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
	  if (*format == '%')
	  {
	    format++;
	    count = picker(format, args, count);
	    format++;
	  }
	  else
	  {
 	    putchar(*format);
	    count++;
	    format++;
	  }
	}
	va_end(args);
	return (count);
}
