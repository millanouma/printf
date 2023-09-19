#include "main.h"

/**
 * _printf - function that produces
 *  output according to a format.
 * @format: format to use.
 * Return: formated output.
*/

int _printf(const char *format, ...)
{
	int printed = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
	   if (*format == '%')
	  {
	     format++;
	     if (*format == '\0')
	        break;
	     switch (*format)
	   {
		case 'c':
			{
				int ch = va_arg(args, int);
				_putchar(ch);
				printed++;
			}
			break;
		case 's':
			{
				char *str = va_arg(args, char *);
				while (*str != '\0')
				{
				          _putchar(*str);
					  str++;
					  printed++;
				}
			}
			break;
		case '%':
			_putchar('%');
			printed++;
			break;
	}
	}
	else
	{
		_putchar(*format);
		printed++;
	}
	format++;
	}
va_end(args);
return (printed);
}
