#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

<<<<<<< HEAD
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = strtol(argv[1], &p, 10);

	count = 0;

	if (!*p)
	{
		while (total > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
				{
					if (total >= cents[i])
						{
							count += total / cents[i];
							total = total % cents[i];
						}
				}

			}
			if (total == 1)
				count++;
=======
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
>>>>>>> b4e07acbc67f97cf870e6f564ee3229bd472dcbf
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
<<<<<<< HEAD
printf("%d\n", count);
return (0);
=======
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", coins);

	return (0);
>>>>>>> b4e07acbc67f97cf870e6f564ee3229bd472dcbf
}
