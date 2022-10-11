#include "dog.h"

/**
* init_dog - function dog
* @d: pointer to struct
* @name: paramter name
* @age: age parameter
* @owner: dog owner parameter
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if(d == NULL)
    {
        return;
    }
    else
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}