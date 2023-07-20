#include "main.h"
#include <stdio.h>
/**
  *main - Entry point
  *Return: - always return 0 (success)
  */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 != 0))
		{
			printf("Fizz");
			if (n != 100)
				printf(" ");
			continue;
		}
		else if ((n % 5 == 0) && (n % 3 != 0))
		{
			printf("Buzz");
			if (n != 100)
				printf(" ");
			continue;
		}
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
			if (n != 100)
				printf(" ");
			continue;
		}
		else
		{
			printf("%d", n);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
