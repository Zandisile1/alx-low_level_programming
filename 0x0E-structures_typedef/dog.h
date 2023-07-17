#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog type
 * @name: name of the dog
 * @age: how old is the dog
 * @owner: who owns the dog
 */

struct dog
{
	float age;
	char *name;
	char *owner;
};

void display_dog(struct dog *d);
void initalise_dog(struct dog *d, char *name, char *owner, float age);

typedef struct dog dog_x;

dog_x *new_dog(char *name, float age, char *owner);

void free_dog(dog_x *d);

#endif
