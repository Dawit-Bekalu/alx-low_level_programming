#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a programe that prints all posible
 * different combinatons of two digits
 * Numbers must be separeted by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are consider the same  combination of two digits 0 and 1
 * Print only the smallest compination of two digits
 * Numbers should be printed function in ascending order, with two digits
 * You can only use the puncher in function
 * (every other function (printf, puts, etc..) is forbidden)
 * Return: 0
 */
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (c != d && d != e && e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);

					if (c + d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}

				}
				c++;
			}
			d++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
