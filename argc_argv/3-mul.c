#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
	}
	else if (argc <= 1)
	{
		printf("Error");
		return (1);
	}

	return (mul);
}
