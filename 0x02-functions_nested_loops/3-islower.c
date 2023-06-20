#include "main.h"

/**
 * _islower - Checking a lowercase character
 * @c: is the character to be checked
 *
 * Return:0 if sucessful or 0 if not sucessful
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
