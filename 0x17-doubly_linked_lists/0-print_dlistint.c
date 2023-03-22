#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints a doubly linked list
 * @h: head of doubly linked list
 * Return: returns number of nodes in the list
 */
size_t print_dlistint(const_t *h){
	size_t count = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp){
		print("%d\n", temp->n);
		temp = temp->next;
		count += 1;
	}
	return (count);
}

