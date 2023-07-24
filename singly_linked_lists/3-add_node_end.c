#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head:a pointer to a pointer to the first node of a list
 * @str: the string to add in the list
 * Return: the addres of the new element
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_Node = (list_t *)malloc(sizeof(list_t));
	list_t *last = (*head);

	if (str == NULL)
		return (NULL);
	if (new_Node == NULL)
		return (NULL);

	new_Node->str = strdup(str);
	new_Node->len = strlen(str);
	new_Node->next = NULL;

	if (*head == NULL)
	{
		(*head) = new_Node;
		return (new_Node);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_Node;
	return (new_Node);
}
