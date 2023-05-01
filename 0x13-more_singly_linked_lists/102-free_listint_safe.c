#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;
	listint_t **addrs;
	size_t i;

	if (!h || !*h)
		return (0);

	addrs = malloc(sizeof(listint_t *) * 1024);
	if (!addrs)
		exit(98);

	while (*h)
	{
		for (i = 0; i < count; i++)
		{
			if (*h == addrs[i])
			{
				*h = NULL;
				free(addrs);
				return (count);
			}
		}

		addrs[count] = *h;
		temp = (*h)->next;
		free(*h);
		*h = temp;
		count++;
	}

	*h = NULL;
	free(addrs);

	return (count);
}

