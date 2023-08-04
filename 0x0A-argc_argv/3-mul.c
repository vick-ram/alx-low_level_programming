#include <stdio.h>
#include <stdlib.h>
/**
  *main - Entry point
  *@argc: int type param
  *@argv: - char type array pointer
  *Return: - returns 0
  */
int main(int argc, char *argv[])
{
	int product;
	int m, n;

	if (argc == 3)
	{
		m = atoi(argv[1]);
		n = atoi(argv[2]);
		product = n * m;
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		exit(1);
	}
	return (0);
}
