#include <stdlib.h>
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

	struct dog *n_dog = NULL;

	while (name[name_len] != '\0')
		name_len++;
	while (owner[owner_len] != '\0')
		owner_len++;

	// Allocate memory for the new dog struct
	*n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL); // Malloc failed, return NULL
	}

	// Allocate memory for the name string
	n_dog->name = malloc(name_len + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL); // Malloc failed, free previous allocation and return NULL
	}

	// Allocate memory for the owner string
	n_dog->owner = malloc(owner_len + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL); // Malloc failed, free previous allocations and return NULL
	}

	// Copy the name and owner strings to the new dog struct
	for (i = 0; i <= name_len; i++)
		n_dog->name[i] = name[i];
	for (i = 0; i <= owner_len; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age; // Set the age of the new dog

	return (n_dog); // Return a pointer to the new dog struct
}
