#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: Adress of strucy dog
 * @name: SName ooooooooooof a dog
 * @owner: Owner of a dog as string
 * @age: Age of dog as float
 *
 * Description: Longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)

{
d->name = name;
d->age = age;
d->owner = owner;
}
