#include "main.h"

/**
 * unsigned - prints a binary number
 * @num: number of arguements
 * @printed: printed characters
 * Return: printed characters
 */

int _unsigned(unsigned int num, int printed)
{
	int count = 0;
	unsigned int temp = num;

	do {
		count++;
		temp /= 10;
	} while (temp != 0);

	if (num == 0)
	{
		_putchar('0');
		printed++;
	}
	else
	{
		char unsigned_str[11];
		int x = 0;

		while (num != 0)
		{
			unsigned_str[x] = (num % 10) + '0';
			num /= 10;
			x++;
		}
		for (x = count - 1; x >= 0; x--)
		{
			_putchar(unsigned_str[x]);
			printed++;
		}
	}
	return (printed);
}
