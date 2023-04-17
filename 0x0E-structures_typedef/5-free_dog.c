#include <stdlib.h>
#include "dog.h"

/**
HEHE, u know it, its ez too :D
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
