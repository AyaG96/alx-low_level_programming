#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - a dog struct
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * description: dog struct
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);

#endif
