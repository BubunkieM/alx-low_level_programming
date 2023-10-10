#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a type of variable of struct dog
 * @d: pointer to initialize struct dog
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *ow
ner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
