#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *old;
	listint_t *new;

	old = *head;

	if (index != 0)
	{
		for (a = 0; a < index - 1 && prev != NULL; a++)
		{
			old = old->new;
		}
	}

	if (old == NULL || (old->new == NULL && index != 0))
	{
		return (-1);
	}

	new = old->new;

	if (index != 0)
	{
		old->new = new->new;
		free(new);
	}
	else
	{
		free(old);
		*head = new;
	}

	return (1);
}
