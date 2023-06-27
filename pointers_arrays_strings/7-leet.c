#include "main.h"

/**
 *leet - this function encode a string into 1337
 *
 *@s: the string to encode into 1337
 * Return: the string encode
 */


char *leet(char *s)
{
	int i, j;
	char code[6] = {'a', 'e', 'o', 't', 'l'};
	char encode[6] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == code[j] || s[i] == code[j] - 32)
			{
				s[i] = encode[j];
			}
		}
	}
	return (s);
}
