#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers,
 * separated by a comma and a space, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
