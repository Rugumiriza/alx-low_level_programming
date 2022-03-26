#include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9, 2 and 4 excluded
 * Return: numbers
 */
void print_most_numbers(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		if (y != 2 && y != 4)
		{
			_putchar(y + '0');
		}
	}
	_putchar('\n');
}
