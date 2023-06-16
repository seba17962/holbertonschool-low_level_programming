#include <stdio.h>
#include <string.h>
#include "main.h"

void
print_alphabetx10(void)
{
int count;
for (count = 0; count <= 9; ++count)
{
char i;
	for (i = 'a'; i <= 'z'; i++)
	_putchar(i);
	_putchar('\n');
}
}
