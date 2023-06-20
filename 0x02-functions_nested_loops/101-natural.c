#include <stdio.h>
/**
 * main - displays natural numbers below 1024
 * multiples of 3 or 5
 *
 * Return:0 if sucessful;
 */
int main(void)
{
int p, q;
for (p = 1; p < 1024; p++)
{
if ((p % 3) == 0 || (p % 5) == 0)
q += p;
}
printf("%d\n", q);
return (0);
}
