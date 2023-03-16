#include <stdio.h>

/**
 * times_table - Table
 * Return: Nothing
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j != 9)
				if (i * j < 10 && j != 0)
					printf("  %d,", i * j);
				else if (i * j == 0 && j == 0)
					printf("%d,", i * j);
				else
					printf(" %d,", i * j);
			else
				if (i * j < 10 && j != 0)
					printf("  %d", i * j);
				else if (i * j == 0 && j == 0)
					printf("%d,", i * j);
				else
					printf(" %d", i * j);
		}
		printf("\n");
	}
}
