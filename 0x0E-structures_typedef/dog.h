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

/**
 * dog_n - typedef for struct dog
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
