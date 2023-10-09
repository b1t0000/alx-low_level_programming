#include "dog.h"
/**
 * init_dog - initialize struct element
 * @d: pointer to struct
 * @name: name of dog
 * @aeg: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}