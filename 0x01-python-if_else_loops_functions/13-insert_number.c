#include "lists.h"

/**
 * insert_node - Inserts number
 * @head: points the head
 * @number: number to insert
 *
 * Return: NULL of function if fails or a pointer to the new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *n1 = *head, *newL;

	newL = malloc(sizeof(listint_t));
	if (newL == NULL)
		return (NULL);
	newL->n = number;

	if (n1 == NULL || n1->n >= number)
	{
		newL->next = n1;
		*head = newL;
		return (newL);
	}

	while (n1 && n1->next && n1->next->n < number)
		n1 = n1->next;

	newL->next = n1->next;
	n1->next = newL;

	return (newL);
}
