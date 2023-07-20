#include <stdio.h>
#include "main.h"
/**
  *main - Entry point
  *Return: always return 0 (success)
  */
int main(void)
{
	unsigned long int i, num = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n /= i;
	}
	printf("%lu\n", n);
	return (0);
}
