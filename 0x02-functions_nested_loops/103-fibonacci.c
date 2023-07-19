#include <stdio.h>
#include "main.h"
/**
  *main - sum of fibonacci sequence integers
  *Return: - always return 0 (success)
  */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 2)
			sum += k;
		j = k -j;
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
