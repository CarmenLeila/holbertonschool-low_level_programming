#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: my first parameter
 * @name: my second parameter as character
 * @age: my third parameter as a float
 * @owner: an other parameter as character
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	unsigned int i = 0;

	while (*(name + i))
	{
		i++;
	}

	d->name = malloc(sizeof(char) * (i + 1));
	if (d->name == NULL)
	{
		return;
	}
	i = 0;
	while (*(name + i))
	{
		*(d->name + i) = *(name + i);
		i++;
	}
	*(d->name + i) = '\0';

	i = 0;
	while (*(owner + i))
	{
		i++;
	}
	d->owner = malloc(sizeof(char) * (i + 1));
	if (d->owner == NULL)
	{
		return;
	}
	i = 0;
	while (*(owner + i))
	{
		*(d->owner + i) = *(owner + i);
		i++;
	}
	*(d->owner + i) = '\0';

	d->age = age;
}
