#include "main.h"
/**
  *flip_bits - returns the number of bits you would need
  *to flip to get from one number to another
  *@n: - int type param
  *@m: - int type param
  *Return: - returns number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int x = n ^ m;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}
