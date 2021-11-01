#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - Creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		newDog = malloc(sizeof(dog_t));
		if (newDog == NULL)
		return (NULL);
		newDog->name = malloc(sizeof(char) * name_l);
		if (newDog->name == NULL)
		{
			free(newDog);
			return (NULL);
		}
		newDog->name = _strcpy(newDog->name, name);
		newDog->owner = _strcpy(newDog->owner, owner);
		newDog->age = age;
	}
	return (newDog);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 * Return: s length
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}

/**
 * _strcpy - Copy a string
 * @dest: Destination
 * @src: Source
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
