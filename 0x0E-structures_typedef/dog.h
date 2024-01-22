#ifndef HEADER_H
#define HEADER_H

/**
 * struct dog - dog
 * @name: name
 * @age: age
 * @owner: owner
 * Description: dog structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - define dog_t
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
