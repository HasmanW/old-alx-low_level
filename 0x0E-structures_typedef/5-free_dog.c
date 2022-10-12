#include "dog.h"

/**
 * free_dog - free up memory
 *@d: array
 * Description: Frees memory in heap
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
