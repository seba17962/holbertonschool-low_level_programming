#include "main.h"
#include <stdlib.h>

/**
 *	string_nconcat - concatenates tow strings
 *	@s1: the fisrt string
 *	@s2: second string
 *	@n: the elements of s2 to add.
 *	Return: the pointer to the asigned memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem = NULL;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (len2 <= n && s2[len2] != '\0')
		len2++;

	mem = malloc(sizeof(char) * (len1 + len2 + 1));
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < len1 + len2; i++)
	{
		if (i < len1)
			mem[i] = s1[i];
		if (i >= len1)
			mem[i] = s2[i - len1];
	}
	mem[len1 + len2] = '\0';
	return (mem);
}
