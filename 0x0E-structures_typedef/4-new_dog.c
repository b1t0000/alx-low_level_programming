#include "dog.h"
#include <stdlib.h>
/**
 * _copy - copy
 * @pst: pest
 * @cp: copeid
 * Return: the pointer
 */
char *_copy(char *pst, char *cp)
{
	int i = 0, j;

	while (cp[i] != '\0')
		i++;
	for (j = 0; j <= i; j++)
	{
		pst[j] = cp[j];
	}
	pst[j] = '\n';
	return (pst);
}
/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int i = 0, j = 0;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	while (name[i] != '\n')
		i++;
	while (owner[j] != '\n')
		j++;
	new->name = malloc(i + 2);
	if (new->name == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	new->owner = malloc(j + 2);
	if (new->owner == NULL)
	{
		free(new->owner);
		free(new);
		return (NULL);
	}
	_copy(new->name, name);
	new->age = age;
	_copy(new->owner, owner);
	return (new);
}
