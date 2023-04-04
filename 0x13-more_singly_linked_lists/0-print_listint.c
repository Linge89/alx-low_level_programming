#include "lists"

/**
 * print_listint - prints all the elemens in a linked list.
 * @h: points to the next node.
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->next);
	count++;
	h = h->next
	}
		return (count);
}
