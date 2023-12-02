#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to the head of the list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */

int is_palindrome(listint_t **head)
{
	listint_t *slow = *head, *fast = *head;
	listint_t *prev = NULL, *next, *second_half;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;

		next = slow->next;
		slow->next = prev;
		prev = slow;
		slow = next;
	}

	second_half = slow;
	if (fast != NULL)
		second_half = slow->next;

	while (prev != NULL && second_half != NULL)
	{
		if (prev->n != second_half->n)
			return (0);
		prev = prev->next;
		second_half = second_half->next;
	}

	return (1);
}
