#include "dog.h"

char *_strcpy(char *dest, char *src);

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}

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

	if (name != NULL && owner != NULL)
	{
		newDog = malloc(sizeof(dog_t));
		if (newDog == NULL)
			return (NULL);
		newDog->name = _strcpy(newDog->name, name);
		newDog->owner = _strcpy(newDog->owner, owner);
		newDog->age = age;
	}
	return (newDog);
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
