#ifndef _DOG_H
#define _DOG_H_

struct dog;

struct dog 
{
	char *name;
	float age;
	char *owner;
};

void doggie(struct dog *d, char *name, float age, char *owner);

#endif
