#include <stdio.h>
#include <ctype.h>
/**
* main - Entry point
*
* Return:0 if sucessful
*/
/* Declaration of the variable.*/
int main(void)
{
int lowerCase = 'a';
/*program that prints the alphabet in lowercase, followed by a new line.*/
while (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase += 1;
}
putchar('\n');
return (0);
}
