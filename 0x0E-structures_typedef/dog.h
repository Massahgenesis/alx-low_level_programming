#ifndef DOG_H
#define DOG_H

/**
 *struct dog - New struct define
 *@name: First member
 *@age: Second member
 *@owner: Third member
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
#endif
