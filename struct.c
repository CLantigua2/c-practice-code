#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct animal
{
    char *name;
    int leg_count;
};

struct animal *create_animal(char *name, int leg_count)
{
    struct animal *a = malloc(sizeof(struct animal));

    a->name = malloc(strlen(name) + 1);
    strcpy(a->name, name);

    a->leg_count = leg_count;

    return a;
}

void free_animal(struct animal *a)
{
    free(a->name);
    free(a);
}

void set_animal_name(struct animal *a, char *name)
{
    /*
    free(a->name);

    a->name = malloc(strlen(name) + 1);
    strcpy(a->name, name);
    */
    a->name = realloc(a->name, strlen(name) + 1);
    strcpy(a->name, name);
}

struct animal *create_goat(void)
{
    char name[5];

    strcpy(name, "goat");

    struct animal *g = create_animal(name, 4);

    return g;
}

int main(void)
{
    struct animal *goat;

    goat = create_animal("goat", 4);
    //goat = create_goat();

    //printf("Hello, world!\n");

    printf("%s %d\n", goat->name, goat->leg_count);

    free_animal(goat);

    return 0;
}