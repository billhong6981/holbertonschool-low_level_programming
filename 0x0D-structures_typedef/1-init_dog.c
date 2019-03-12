#include "dog.h"

/**
 * init_dog - a function that initializes the value of struct dog of data
 * @d: a pointer point to struct dog
 * @name: name of dog as a string
 * @age: age of dog, float type
 * @owner: owner of the dog, string
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
