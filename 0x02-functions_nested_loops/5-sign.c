#include "main.h"
/**
  * print_sign - prints the sign close to a number
  * @n: input number as integer
  * Return: return 1 if greater than zero, 0 if 0 and -1 if less than zero
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(45);
		return (0);
	}
	else
	{
		_putchar(48);
		return (-1);
	}
		_putchar('\n');
}
