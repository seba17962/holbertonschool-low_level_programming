#include <stdio.h>
#include <stdlib.h>


int
main(int argc, char *argv[])
{
	int i, dig, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (dig = 0; argv[i][dig]; dig++)
		{
			if (argv[i][dig] < '0' || argv[i][dig] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
