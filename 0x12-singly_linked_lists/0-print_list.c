Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore

@HasmanW
mz-jennytech
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x12-singly_linked_lists/0-print_list.c
@mz-jennytech
mz-jennytech task 0
Latest commit 4975b79 4 days ago
 History
 1 contributor
26 lines (21 sloc)  420 Bytes

#include "lists.h"
/**
 * print_list - prints all the elements of `list_t` list
 * @h: pointer to the linked list to print
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{

		if (h->str == NULL)
		/*if false i.e. NULL, NaN, undefined or "" */
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);


		h = h->next;
		s++;
	}

	return (s);
}
