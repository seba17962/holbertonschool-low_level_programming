#include "main.h"

/**
 *_strspn - get the length of a prefix substring.
 *@s: the string
 *@accept: segment len of reference.
 *Return: the number of bytes in the initial segment of s which
 *consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				num++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (num);
		}
	}
	return (num);
}
