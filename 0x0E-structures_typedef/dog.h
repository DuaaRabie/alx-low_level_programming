#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - type for dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: a new type called dog that includes
 *              dog name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - type def for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
