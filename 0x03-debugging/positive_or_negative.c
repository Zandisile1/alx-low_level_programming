#include "main.h"

/**
 * positive_or_negative - Entry point
 *
 * Return: 0 (Sucess)
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
		return;
}
