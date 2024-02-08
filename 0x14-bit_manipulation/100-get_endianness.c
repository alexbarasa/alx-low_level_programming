#include <stdio.h>
/**
 * get_endianness - Checks endianness
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endian = (char *)&num;
	return (*endian == 1);
}
