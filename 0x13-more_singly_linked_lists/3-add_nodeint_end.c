#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a list
 * @head: pointer
 * @n: data to add to a new node
 * Return: adress of the new element or NULL IF IT FAILED
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;
	temp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;

	if (*head == NULL)
	{
	*head = node;
	return (node);
	}
		while (temp->next)
		temp = temp->next;
		temp->next = node;
	return (node);
}
