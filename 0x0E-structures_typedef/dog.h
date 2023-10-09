#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: nampe
 * @age: age
 * @owner: owner
 *
 * Description: Longer Description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
	/**
	 * Description: longer description
	 */
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
