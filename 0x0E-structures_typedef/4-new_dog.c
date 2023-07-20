#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: fail if NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, leg, len;
	
	struct dog *n_dog = NULL;
	
	leg = 0;
	while (name[leg] != '\0')
		leg++;
	len = 0;
	while (owner[len] != '\0')
		len++;
	
	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(leg + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->nane);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= leg; i++)
		n_dog->name[i] = name[i];
	for (i = 0; i <= len; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
}
