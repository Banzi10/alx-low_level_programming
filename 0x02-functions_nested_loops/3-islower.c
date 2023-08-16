#include "main.h"
/**
  * _islower - shows 1 if the character is lowercase
  * @c: character in ASCII table
  *Return: returns 1 for lowercase and 0 for anything else
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
