#include "lists.h"

/**
 * reverse_listint - reverses list
 * @head: pointer to head
 *
 * Return: pointer
 */
void reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *cur = *head;
	listint_t *next = NULL;

	while (cur)
	{
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}

	*head = prev;
}

/**
 * is_palindrome - list is a palindrome
 * @head: double pointer
 *
 * Return: 1 or 0
 */
int is_palindrome(listint_t **head)
{
	listint_t *sl = *head, *fa = *head, *temp = *head, *du = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	while (1)
	{
		fa = fa->next->next;
		if (!fa)
		{
			du = sl->next;
			break;
		}
		if (!fa->next)
		{
			du = sl->next->next;
			break;
		}
		sl = sl->next;
	}

	reverse_listint(&du);

	while (du && temp)
	{
		if (temp->n == du->n)
		{
			du = du->next;
			temp = temp->next;
		}
		else
			return (0);
	}

	if (!du)
		return (1);

	return (0);
}
