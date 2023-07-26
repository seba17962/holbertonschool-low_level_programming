#include "lists.h"

/**
 * free_dlistint - frees a doble linked list
 * @head: the pointer to the first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = NULL;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
