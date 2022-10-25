#include "lists.h"

size_t print_list(const list_t *h)
{
    size_t s = 0;
    while(h->str != NULL)
    {
        printf("[%u] (nil)\n", h->len, h->str);
        h = h->next;
        s++;
    }
    printf("[0] (nil)\n");

    return (s);
}
