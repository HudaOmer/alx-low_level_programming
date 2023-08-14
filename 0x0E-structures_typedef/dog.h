#ifndef DOG
#define DOG

/**
 * struct dog - A dog
 * @name: string
 * @age: float
 * @owner: string
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - sturuct 
 */

typedef struct dog dog_t;

#endif
