#include "dog.h"
/**
 * print_dog - prints data to a dog
 *
 * @d: input parameter
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %d\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
