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
int z;
for (z = 0; z < 10; z++)
putchar((z % 10) + '0');
putchar('\n');
return (0);
}
