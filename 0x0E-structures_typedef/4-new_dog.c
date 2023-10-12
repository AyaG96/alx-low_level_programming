#include "dog.h"
#include <string.h>
/**
 * _strcpy - copies string
 * @dest: destination
 * @src: source
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
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
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->name = _strcpy(new->name, name);

	new->owner = strdup(owner);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	new->owner = _strcpy(new->owner, owner);
	new->age = age;

	return (new);
}


