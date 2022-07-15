#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: string to reverse
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, c, k;
	char str[500];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}
