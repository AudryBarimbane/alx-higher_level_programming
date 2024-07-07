#include "lists.h"

/**
 * check_cycle - checks a cycle in singly linked list
 * @list: pointer
 * Return: 0 if no cycle or 1 if cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *p;
	listint_t *p1;

	p = list;
	p1 = list;
	while (list && p && p->next)
	{
		list = list->next;
		p = p->next->next;

		if (list == p)
		{
			list = p1;
			p1 =  p;
			while (1)
			{
				p = p1;
				while (p->next != list && p->next != p1)
				{
					p = p->next;
				}
				if (p->next == list)
					break;

				list = list->next;
			}
			return (1);
		}
	}

	return (0);
}
