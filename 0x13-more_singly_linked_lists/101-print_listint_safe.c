#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t count;

    slow = head;
    fast = head ? head->next : NULL;
    count = 0;

    while (slow && fast && slow < fast)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
        slow = slow->next;
        fast = fast->next ? fast->next->next : NULL;
    }

    if (slow)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
    }

    if (!slow || !fast)
    {
        while (slow)
        {
            printf("[%p] %d\n", (void *)slow, slow->n);
            count++;
            slow = slow->next;
        }
    }

    return (count);
}
