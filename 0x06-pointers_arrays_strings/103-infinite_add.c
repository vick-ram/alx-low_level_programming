#include "main.h"
/**
  *isValidDigit - determines if the digit is valid
  *@c: - char type param
  *Return: - returns true
  */
int isValidDigit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
  *infinite_add - adds two numbers and returns result
  *@n1: - char type
  *@n2: - char type
  *@r: - char type
  *@size_r: - buffer size of type int
  *Return: - return result
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum, numDigits = 1, tempSum, i;

	if (*n1 != '\0' && *n2 != '\0' && isValidDigit(*n1) && isValidDigit(*n2))
	{
		sum = (*n1 - '0') + (*n2 + '0');
		tempSum = sum;
		while (tempSum >= 10)
		{
			numDigits++;
			tempSum /= 10;
		}
		if (numDigits + 1 <= size_r)
		{
			for (i = numDigits - 1; i >= 0; i--)
			{
				r[i] = '0' + (sum % 10);
				sum /= 10;
			}
			r[numDigits] = '\0';
			return (r);
		}
		else
			return (0);
	}
	else
		return (0);
}
