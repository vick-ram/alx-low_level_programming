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
	int m = atoi(argv[1]);
	int n = atoi(argv[2]);

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	product = m * n;
	printf("%d\n", product);
	return (0);
}
