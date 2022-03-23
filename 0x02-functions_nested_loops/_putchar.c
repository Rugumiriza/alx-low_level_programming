#include <unistd.h>

/**
 * _putchaar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: pn success 1.
 * on error -1 is returned, and on error is set approprietely.
 * */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
