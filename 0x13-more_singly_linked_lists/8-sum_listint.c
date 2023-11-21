#include "lists_h"

/**
 * sum_listint - returns sum of all dta
 * @head: pointer to first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}