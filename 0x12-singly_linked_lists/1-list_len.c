#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked
 * @h: pointer to lists
 *
 * Return: Number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
{
	a++;
	h = h->next;
}
	return (a);
}
