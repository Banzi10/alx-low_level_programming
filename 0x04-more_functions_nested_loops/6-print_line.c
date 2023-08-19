#include "main.h"
/**
  * print_line - straight line
  * @n: numberof times a character is printed
  * @_ : what we print line with
  * Return: always 0
  */

void print_line(int n)
{	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
