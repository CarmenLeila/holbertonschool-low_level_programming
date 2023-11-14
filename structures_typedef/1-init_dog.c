#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: my first parameter
 * @name: my second parameter as character
 * @age: my third parameter as a float
 * @owner: an other parameter as character
 */
struct dog
{
	char name[25];
	float age;
	char owner[25];
};
void init_dog(struct dog *d, char *name, float age, char *owner)
	{
		malloc(d->name,name,sizeof(d->name)-1);
		d->name[sizeof(d->name)-1] = '\0';
		d->age = age;
		malloc(d->owner,owner,sizeof(d->owner)-1);
		d->owner[sizeof(d->owner)-1] = '\0';
	}
int main(void)
	{
		struct dog d;
		init_dog(&d,"Boby",4,"Marc");
		printf("Name: %s\n",d.name);
		printf("Age: %d\n",d.age);
		printf("Owner: %s\n",d.owner);

		return 0;
	}
