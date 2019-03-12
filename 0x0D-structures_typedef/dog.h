#ifndef DOG_H
#define DOG_H
/**
 * struct dog - data structure of dog
 * @name: name of the dog type of pointer
 * @age: age of the dog type of int
 * @owner: name of the owner of the dog, pointer
 *
 * Description: Defines the dog informations and type of dog's data struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/* Additional function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strdup(char *str);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
