#include "lists.h"

/**
 *	sum_dlistint - sum of all the data of a doble linked list
 *	@head: the pointer to the first node of the doble linked list
 *	Return: the sum of all the data (n) of a doble linked list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);
	aux = head;

	while (aux != NULL)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
