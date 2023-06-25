#include "main.h"

/**
 *_strcmp - compare strings.
 *@s1: first string.
 *@s2: second string.
 *
 *Return: a pointer to the resulting string
 */

int _strcmp(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0;

	while (s1[len_s1] != '\0')
		len_s1++;

	while (s2[len_s2] != '\0')
		len_s2++;

	if (len_s1 > len_s2)
		return (-1);

	else if (len_s1 < len_s2)
		return (1);

	else
		return (0);
}
