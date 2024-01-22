#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure to hold info about the dog
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif
