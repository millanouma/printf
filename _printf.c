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
				char ch = va_arg(args, int);
				putchar(ch);
				printed++;
			}
			break;
		case 's':
			{
				char *str = va_arg(args, char*);
				if (*str != '\0')
				{
					while (*str){
					putchar(*str);
					str++;
					printed++;
			        	}
				}
				else 
				{
				        char *null_str = "(null)";
					while (*null_str){
					putchar(*null_str);
					null_str++;
					printed++;
					}
				}
			}
			break;
		case '%':
			putchar('%');
			printed++;
			break;
	}
	}
	else
	{
		putchar(*format);
		printed++;
	}
	format++;
	}
va_end(args);
return (printed);
}
