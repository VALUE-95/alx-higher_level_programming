#include "lists.h"


/**
 * insert_node - inserts a number into a sorted singly linked list.
 * @head: pointer to pointer of the first node.
 * @number: number to be included.
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *nv, *cv, *pv;

	nv = malloc(sizeof(listint_t));
	if (nv == NULL)
		return (NULL);

	nv->n = number;
	nv->next = NULL;

	if (*head == NULL || (*head)->n >= number)
	{
		nv->next = *head;
		*head = nv;
		return (nv);
	}

	cv = *head;
	pv = NULL;

	while (cv != NULL && cv->n < number)
	{
		pv = cv;
		cv = cv->next;
	}

	nv->next = cv;
	pv->next = nv;

	return (nv);
}
