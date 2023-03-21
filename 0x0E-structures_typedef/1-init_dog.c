#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - A struct define
 *@d: A member
 *@name: A member
 *@age: A member
 *@owner: A member
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
