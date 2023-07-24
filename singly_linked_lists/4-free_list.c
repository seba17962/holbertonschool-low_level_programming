#include "lists.h"

/**
 *	free_list - frees a list
 *	@head: the pointer to a first node
 */

void free_list(list_t *head)
{
	list_t *aux = NULL;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}

}
