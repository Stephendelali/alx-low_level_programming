#include "lists.h"

/**
 * free_list - Frees  list.
 * @head: Po of the list.
 */
void free_list(list_t *head)
{
	list_t *c, *t;

	c = head;
	while (c != NULL)
	{
		t = c;
		c = c->next;
		free(t->str);
		free(t);
	}
}
