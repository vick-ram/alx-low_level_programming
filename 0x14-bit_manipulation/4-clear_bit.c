#include "main.h"
/**
  *clear_bit - sets the value of a bit to 0
  *@n: - int type parram
  *@index: int type param
  *Return: - returns 1 (success) and 0 otherwise
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
