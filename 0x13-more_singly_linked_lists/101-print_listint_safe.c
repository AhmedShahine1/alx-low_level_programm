#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Head of the linked list
 *
 * Return: Number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr = head, *next = NULL;
	size_t count = 0;

	while (curr)
	{
		count++;
		printf("[%p] %d\n", (void *)curr, curr->n);
		next = curr->next;
		if (next >= curr)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			break;
		}
		curr = next;
	}
	return (count);
}
