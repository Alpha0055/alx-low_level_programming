#include "main.h"

/**
 * get_endianness - checks the endianness of the machine
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c == 1)
		return (1); /* Little Endian */
	else
		return (0); /* Big Endian */
}
