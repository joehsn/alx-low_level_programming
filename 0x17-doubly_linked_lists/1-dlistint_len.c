#include "lists.h"

/**
 * dlistint_len - a function that returns the length
 * of the linkedlist
 *
 * @h: a param
 *
 * Return: the length of the linkedlist
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
