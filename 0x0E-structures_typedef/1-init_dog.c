#include "main.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Initializes a variable
 * of type struct dog with the given values.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

