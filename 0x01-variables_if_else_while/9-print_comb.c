#include <stdio.h>
/**
 * main - Entry point
 * description: program that prints all possible combs of single-digit no
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
			putchar('\n');
		}
	}
	return (0);
}
