#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - Initialization of variable
 *@d: Dog initialize
 *@name: Name of the dog
 *@age: Age of the dog
 *@owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
