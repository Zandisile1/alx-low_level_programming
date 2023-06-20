#include <stdio.h>
/**
 * main- displays the fibonnaci numbers
 *
 * Return: 0 always
 */
int main(void)
{
int x;
long int num1, num2, lastnum;

num1 = 1;
num2 = 2;
printf("%ld,%ld", num1, num2);
for (x = 0; x < 48; x++)
{
lastnum = num1 + num2;
printf("%ld", lastnum);
num1 = num2;
num2 = lastnum;
}
printf("\n");
return (0);
}
