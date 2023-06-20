#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * init_dog - initializes the variable type struct dog
 * struct dog - struct of dog
 * @d: first
 * @name: second
 * @age: third
 * @owner: fourth
 * Description: function initializes dog
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
		return;

	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		return;
	}

	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
