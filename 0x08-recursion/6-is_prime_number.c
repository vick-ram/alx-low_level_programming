#include "main.h"
/**
  *is_divisible - checks for divisibility
  *@n: - param
  *@diviser: - param
  *Return: - returns divisible num
  */
int is_divisible(int n, int diviser)
{
	if (diviser <= 1)
		return (0);
	if (diviser * diviser > n)
		return (0);
	if (n % diviser == 0)
		return (1);
	return (is_divisible(n, diviser + 1));
}
/**
  *is_prime_number - prime and even
  *@n: - int type param
  *Return: - returns 1 if prime and 0 if even
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (!is_divisible(n, 2));
}
