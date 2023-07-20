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
		while ((num % i == 0) && (num != i))
			num /= num;
	}
	printf("%lu\n", num);
	return (0);
}
