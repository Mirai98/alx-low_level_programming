#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct dog
 * @name: name of the dog
 * @age : age of the dog
 * @owner: the name of the owner of the dog
 *
 * Description: dog Description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
#endif
