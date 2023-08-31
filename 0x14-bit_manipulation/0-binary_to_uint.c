#include "main.h"
/**
  *binary_to_uint - converts binary to unsigned int
  *@b: - char type param
  *Return: - returns converted number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	char curr;

	if (b == NULL)
		return (0);
	while (*b)
	{
		curr = *b;
		if (curr != '0' && curr != '1')
			return (0);
		res = (res << 1) + (curr - '0');
		b++;
	}
	return (res);
}
