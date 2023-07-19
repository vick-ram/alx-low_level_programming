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
	int next = t1 + t2;

	printf("%d, %d,", t1, t2);
	for (i = 3; i <= 50; i++)
	{
		printf("%d,", next);
		t1 = t2;
		t2 = next;
		next = t1 + t2;
	}
	printf("\n");
	return (0);
}
