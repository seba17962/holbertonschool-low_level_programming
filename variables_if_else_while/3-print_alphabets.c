#include <stdio.h>

int
main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	putchar(alphabet);
}
for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
{
	putchar(alphabet);
}
putchar('\n');
return (0);
}
