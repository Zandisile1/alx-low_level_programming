#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * password for 101-crackme program
 *
 * Return:0 if successful
 */

int main(void)
{
	int password[100];
	int x, iSum, n;

	iSum = 0;

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
	password[x] = rand() % 78;
	iSum += (password[x] + '0');
	putchar(password[x] + '0');
	if ((2772 - iSum) - '0' < 78)
	{
	n = 2772 - iSum - '0';
	iSum += n;
	putchar(n + '0');
	break;
	}
	}
	return (0);
}
