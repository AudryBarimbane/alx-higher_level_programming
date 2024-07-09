#include "lists.h"

/**
 * reverse_list - reverse list second half
 *
 * @hr: head
 * Return: void
 */
void reverse_list(listint_t **hr)
{
	listint_t *prev;
	listint_t *temp;
	listint_t *next1;

	prev = NULL;
	temp = *hr;

	while (temp != NULL)
	{
		next1 = temp->next;
		temp->next = preb;
		prev = temp;
		temp = next1;
	}

	*hr = prev;
}

/**
 * compare_list - compares integers of list
 *
 * @h1: head of the first half
 * @h2: head of the second half
 * Return: 1 if are equals, 0 if not
 */
int compare_list(listint_t *h1, listint_t *h2)
{
	listint_t *tmp1;
	listint_t *tmp2;

	tmp1 = h1;
	tmp2 = h2;

	while (tmp1 != NULL && tmp2 != NULL)
	{
		if (tmp1->n == tmp2->n)
		{
			tmp1 = tmp1->next;
			tmp2 = tmp2->next;
		}
		else
		{
			return (0);
		}
	}

	if (tmp1 == NULL && tmp2 == NULL)
	{
		return (1);
	}

	return (0);
}

/**
 * is_palindrome - checks if a list is a palindrome
 * @head: pointer to head
 * Return: 0 if it is not a palindrome or 1 if ok
 */
int is_palindrome(listint_t **head)
{
	listint_t *sl, *fl, *prev_sl;
	listint_t *l_half, *m;
	int pal;

	sl = fl = prev_sl = *head;
	m = NULL;
	pal = 1;

	if (*head != NULL && (*head)->next != NULL)
	{
		while (fl != NULL && fl->next != NULL)
		{
			fl = fl->next->next;
			prev_sl = sl;
			sl = sl->next;
		}

		if (fl != NULL)
		{
			m = sl;
			sl = sl->next;
		}

		l_half = sl;
		prev_sl->next = NULL;
		reverse_list(&scn_half);
		pal = compare_list(*head, scn_half);

		if (m != NULL)
		{
			prev_sl->next = m;
			m->next = l_half;
		}
		else
		{
			prev_sl->next = l_half;
		}
	}

	return (pal);
}

