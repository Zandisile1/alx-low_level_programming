#include "main.h"

/**
 *_isalpha - checks the character of the alphabet
 *@c: the cheked charater
 * Return:1 if sucessful, and 0 if not sucessful.
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
