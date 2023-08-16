#include "main.h"
/**
  * _isalpha - looks for numbers either uppercase or lowercase
  * @c: The character in ASCII code
  * Return: returns 1 if its a letter and 0 otherwise
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
