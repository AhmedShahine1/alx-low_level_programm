#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *prev = NULL, *next = NULL;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	while (current != NULL)
	{
		next = current->next;

		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (next >= current)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			break;
		}

		prev = current;
		current = next;
	}

	return (count);
}
