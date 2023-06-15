#include <stdio.h>

int
main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	putchar(alphabet);
	alphabet++;
}
putchar('\n');
return (0);
}
