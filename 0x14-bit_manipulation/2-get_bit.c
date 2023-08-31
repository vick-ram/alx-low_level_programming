#include "main.h"
/**
  *get_bit - returns the value of a bit
  *@n: - int type param
  *@index: - int type param
  *Return: - returns the value of a bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);
	return ((n >> index) & 1);
}
