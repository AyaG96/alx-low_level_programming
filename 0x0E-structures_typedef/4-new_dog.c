#include "dog.h"
#include <string.h>
/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));

			if (new == NULL)
			return (NULL);

	new->name = strdup(name);
	if (name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->age = age;

	new->owner = strdup(owner);
	if (owner == NULL)
	{
		free(name);
		free(new);
		return (NULL);
	}
	return (new);
}


