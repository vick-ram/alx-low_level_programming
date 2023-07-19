#include <stdio.h>
#include "main.h"
/**
  *main - fibonacci series
  *Return: - always return 0
  */
int main(void)
{
	int i;
	int t1 = 1, t2 = 2;

	while ( i < 50)
	{
		if (i == 0)
			printf("%ld", t1);
		else if (i == 1)
			printf(", %ld", t2);
		else
		{
			t2 += t1;
			t1 = t2 - t1;
			printf(", %ld", t2);
		}
		++i;
	}
	printf("\n");
	return (0);
}
