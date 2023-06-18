#include <stdio.h>

/**
* main - Entry point
*
* Description: 'The program prints all numbers of base 10'
* Parameter: from 0-10;
*
* Return:0 if sucessful
*/

int main(void) /* my code for numbers of base*/
{
int num;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
putchar('\n');
return (0);
}
