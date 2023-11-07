#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - New struct define.
 * @name: Struct member.
 * @age: Struct member.
 * @owner: Struct member.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
	typedef struct dog dog_t;
	int _putchar(char);
	void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
	dog_t *new_dog(char *name, float age, char *owner);
	void free_dog(dog_t *d);

#endif
