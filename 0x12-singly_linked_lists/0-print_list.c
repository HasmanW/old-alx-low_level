#include "lists.h"
/**
 * print_list - prints all the elements of `list_t` list
 * @h: pointer to the linked list to print
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
    size_t node = 0;

    while(h)
    {
        if(h->str != NULL)
        {
            printf("[%u] %s\n", h->len, h->str);
        }
        else
        {
            printf("[0] (nil)\n");
        }

        h = h->next;
        node++;
    }
    return (node);
}
