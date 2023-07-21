#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to the new dog struct or NULL if malloc fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, name_len = 0, owner_len = 0;

	// Calculate the lengths of the name and owner strings
	while (name[name_len] != '\0')
		name_len++;
	while (owner[owner_len] != '\0')
		owner_len++;

	// Allocate memory for the new dog struct
	struct dog *new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		return NULL; // Malloc failed, return NULL
	}

	// Allocate memory for the name string
	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return NULL; // Malloc failed, free previous allocation and return NULL
	}

	// Allocate memory for the owner string
	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return NULL; // Malloc failed, free previous allocations and return NULL
	}

	// Copy the name and owner strings to the new dog struct
	for (i = 0; i <= name_len; i++)
		new_dog->name[i] = name[i];
	new_dog->name[name_len] = '\0';

	for (i = 0; i <= owner_len; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[owner_len] = '\0';

	new_dog->age = age; // Set the age of the new dog

	return new_dog; // Return a pointer to the new dog struct
}
