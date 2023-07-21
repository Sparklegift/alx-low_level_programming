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
	
	struct dog *new_dog = NULL;
	
	leg = 0;
	while (name[leg] != '\0')
		leg++;
	len = 0;
	while (owner[len] != '\0')
		len++;
	
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(leg + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->nane);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= leg; i++)
		new_dog->name[i] = name[i];
	new_dog->name[leg] = '\0';
	
	for (i = 0; i <= len; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[len] = '\0';
	
	new_dog->age = age;
	return (new_dog);
}
