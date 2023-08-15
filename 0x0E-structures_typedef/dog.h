#ifndef dog_h
#define dog_h

/**
 * struct dog - short description
 * @name: dog's name
 * @age: dog's age
 * @owner: the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
