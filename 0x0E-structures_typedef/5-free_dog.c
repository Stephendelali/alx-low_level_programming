#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @t: struct dog to free
 */
void free_dog(dog_t *t)
{
	if (t)
	{
		free(t->name);
		free(t->owner);
		free(t);
	}
}

