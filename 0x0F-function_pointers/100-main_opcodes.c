#include <stdio.h>
#include <stdlib.h>
/**
  *print_opcodes - prints opcodes
  *@add: - address of type char
  *@size: - int type
  *Return: - returns nothing
  */
void print_opcodes(char *add, int size)
{
	int i;
	char opcode;

	for (i = 0; i < size; i++)
	{
		opcode = add[i];
		printf("%.2hhx", opcode);
		if (i < size - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
/**
  *main - Entry point of a function
  *@argc: - int type param
  *@argv: - char pointer param
  *Return: - always return 0
  */
int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, num_bytes);
	return (0);
}
