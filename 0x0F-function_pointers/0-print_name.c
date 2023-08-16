#include "function_pointers.h"
#include <stdio.h>
/**
 * PrintName - print name using pointer to function
 * @Name: string to add
 * @f: pointer to function
 * Return: nothing
 **/
void PrintName(char *Name, void (*f)(char *))
{
	if (Name == NULL || f == NULL)
		return;

	f(name);
}
