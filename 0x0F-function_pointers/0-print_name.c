#include "function_pointers.h"
#include <stdlib.h>
/**
  *print_name - prints a name
  *@name: - char type param
  *@f: - function pointer
  *Return: - returns nothing
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
