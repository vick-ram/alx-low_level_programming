#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *main - entry point
  *@argc: int type param
  *@argv: - char array type
  *Return: - returns 0
  */
int main(int argc, char *argv[])
{
	int sum = 0, i, j = 0;

	if (argc < 2)
	{
		printf("0");
		printf("\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
