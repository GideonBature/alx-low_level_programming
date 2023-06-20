#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"

/**
 * struct dog - struct of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: sets name, age and owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
