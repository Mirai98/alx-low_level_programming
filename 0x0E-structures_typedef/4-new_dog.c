#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - f that gets the length of a string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy -f the  copies the string pointed to by @src
 * @dest : string
 * @src : string to copy
 *
 * Return: @dest
 */
char *_strcpy(char *dest, char *src)
{
	int j, i;

	j = 0;

	while (src[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - a f that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: The new struct dog, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL)

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
			free(dog);
			return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);
	return (dog);
}
