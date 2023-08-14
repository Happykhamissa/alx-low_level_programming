#ifndef DOG_H
#define DOG_H

/**
  * struct dog - dog's informations
  * @name: first member of the struct.
  * @age: second member of the struct.
  * @owner: tirth member of the struct.
  *
  * Description: information of a dog.
  */

struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
