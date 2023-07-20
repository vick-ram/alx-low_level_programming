#include <stdio.h>
#include "main.h"
/**
  *is_Prime - return 0 if prime, else return 1
  *@n: integer
  *Return: - that described
  */
int is_Prime(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (1);
}
/**
  *main - Entry point
  *Return: always return 0 (success)
  */
int main(void)
{
	int i;
	long int n = 612852475143;
	int maxPrime = 1;

	for (i = 2; i <= n; i++)
	{
		if (is_Prime(i) && n % i == 0)
		{
			maxPrime = i;
			while (n % i == 0)
			{
				n /= i;
			}
		}
	}
	printf("%d", maxPrime);
	return (0);
}
