#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *add_node - adds a new node at the beginning of a list_ t list
 *@head : double pointer to list_t
 *@str : string to be added to the list
 *Return:the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int count = 0;

	while (str[count])
		count++;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = count;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
