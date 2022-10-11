#include "dog.h"
#include "main.h"
/**
* init_dog - function dog
* @d: pointer to struct
* @name: paramter name
* @age: age parameter
* @owner: dog owner parameter
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
struct dog *ptr;

ptr = malloc(sizeof(struct dog));
if (ptr == NULL)
{
return;
}
ptr->name = name;
ptr->age = age;
ptr->owner = owner;
}
