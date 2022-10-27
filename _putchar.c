#include <unistd.h>

/**
 * _putchar -writes the character c tostdout
 * @c: char to be printed
 * Return: 1 on success
 */
int _putchar(clar c)
{
	return(write(1, &c, 1));
}
