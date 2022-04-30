#ifndef _DOG_H_
#define _DOG_H_


/**
 * struct dog - its a struct that stores into of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: struct stores name, age
 * and onwer
 */

struct dog;

struct dog 
{
	char *name;
	float age;
	char *owner;
};

void doggie(struct dog *d, char *name, float age, char *owner);

#endif
