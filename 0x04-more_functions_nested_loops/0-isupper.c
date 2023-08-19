#include "main.h"
/**
  * _isupper - checks for lowercase letters
  * @c: the character being checked
  * Return: 1 if its uppercase and 0 if its lowercase
  */
int _isupper(int c)
{
	if (c <= 65 && c >= 90)
	{
		return (1);
	}
	return (0);
}
