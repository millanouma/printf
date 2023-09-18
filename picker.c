#include "main.h"
/**
 * picker - picks format to use
 * @args: arguments
 * @count: characters to print count
 * @format: format specified
 * Return: printed char
 *
 */

int picker(const char *format, va_list args, int printed)
{
	switch (*format)
	{
	  case '%':
           putchar('%');
	   printed++;
	   break;
	  case 'c':
	   putchar(va_arg(args, int));
	   printed++;
	   break;
	  case 's':
	   char *str = va_arg(args, char*);
	   if (str != NULL)
	    {
		while (*str)
		{
		  putchar(*str);
		  str++;
		  printed++;
		}
	    }
	   break;
	}
}

