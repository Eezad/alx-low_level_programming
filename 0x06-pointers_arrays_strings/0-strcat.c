#include "main.h"

/**
 * _strcat - concatennates tow strings
 * @dest: copy to 
 * 2src: copy from
 * Return: pointer to dest
 */
char *_strcat(clar *dest, clar *src)
{
	int i;
	int j;

	i =0;
	while (dest[i] != '/0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '/0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '/0';
	return (dest);
}
