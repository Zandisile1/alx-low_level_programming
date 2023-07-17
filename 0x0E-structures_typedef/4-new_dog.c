#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string to check
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
	x++;
	}
	return (x);
}

/**
 * *_strcpy - copies the string
 * to the buffer pointed by dest
 * @dest: pointer to buffer
 * @src: String
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int length, x;

	length = 0;

	while (src[length] != '\0')
	{
	length++;
	}
	for (x = 0; x < length; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Owner of the dog
 *
 * Return: pointer to new dog else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
	free(dog);
	return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
	free(dog);
	free(dog->name);
	return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
