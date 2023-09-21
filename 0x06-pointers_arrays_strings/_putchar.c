#include <unistd.h>

/**
 * _putchar - visites the catacter c to stdout
 * @c: The caracter to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
