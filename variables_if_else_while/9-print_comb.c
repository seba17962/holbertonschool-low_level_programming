#include <stdio.h>

int
main(void)
{
int number;
for (number = '0'; number <= '9'; number++)
{
	putchar(number);
	if (number == '9')
	{
		break;
	}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}