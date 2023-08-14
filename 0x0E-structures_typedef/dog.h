#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog
 * @name: string
 * @age: float
 * @owner: string
 * Description: sth
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - type for struct dog
 */

typedef struct dog dog_t;

#endif
