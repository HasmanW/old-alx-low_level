#ifndef LISTS_H
#define LISTS_H


#include<stdio.h>
#include<stdlib.h>

typedef struct lists_s
{
    char  *str;
    unsigned int leng;
    struct list_s *next;
}list_t;

size_t print_list(const list_t *h)

#endif