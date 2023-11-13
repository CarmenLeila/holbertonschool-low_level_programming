/**
 *
 * Description: Poppy
 */
struct dog
{
	name, type = char *;
	age, type = float;
	owner, type = char *;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

