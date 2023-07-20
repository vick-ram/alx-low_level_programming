#include <stdio.h>
#include "main.h"
/**
  *is_Prime - return 0 if prime, else return 1
  *@n: integer
  *Return: - that described
  */
int is_Prime(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
/**
  *largestPrimeFactor - returns maxFactor
  *@n: - integer value
  *Return: returns maxPrime
  */
long long int largestPrimeFactor(long long int n)
{
	int maxPrime;
	int i;

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
	return (maxPrime);
}
/**
  *main - Entry point
  *Return: always return 0 (success)
  */
int main(void)
{
	long long int num = 612852475143;
	long long int largestPrime = (largestPrimeFactor(num));

	printf("%lld\n", largestPrime);
	return (0);
}
