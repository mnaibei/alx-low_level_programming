#ifndef HEADER_FILE
#define HEADER_FILE dog.h
/**
 *struct dog - defines dog xtics
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of the dog
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
