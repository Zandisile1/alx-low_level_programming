#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main -Entry point
 *
 * Return:0 if sucessful
 */

/* betty style code for function main goes here*/
int main(void) /*Description: Main function*/
{
int i = '0';
while (i <= '9')
/* this is the code*/
{
putchar(i);
if (i != '9')
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
