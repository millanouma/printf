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
	char *null_str = "(null)";

	va_list args;
	va_start(args, format);

	while (*format)
       	{
       		 if (*format == '%' && format[1])
		 {
            		format++;
            		if (*format == 'c')
                	printed += putchar(va_arg(args, int));
            		else if (*format == 's')
		       	{
                		char *str = va_arg(args, char *);
                		if (str)
                    		while (*str)
                        	printed += putchar(*str++);
                		else
                    			while (*null_str)
                        		printed += putchar(*null_str++);
            		}	
		       	else if (*format == '%')
                		printed += putchar('%');
            		else
                		printed += putchar(*format);
        	}
		 else
		 {
            		printed += putchar(*format);
        	}
        	format++;
    	}
    
    va_end(args);
    return printed;
}
