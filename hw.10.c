#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct cities
{
    char name[100];
    char country[100];
    int population;
} Cities;

Cities Enter(void)
{
    Cities where;
    printf("Input three cities: \n");
    printf("Name> ");
    scanf(" %s", where.name);
    printf("Country> ");
    scanf(" %s", where.country);
    printf("Population> ");
    scanf(" %d", &where.population);
    printf("\n");
    return where;
}

void Show(Cities where)
{
    int i;
    printf("%d. %s in %s with a population of %d people \n", i ,  where.name, where.country, where.population);
    i++;
}

int main(void)
{
    Cities where[100];
    for(int i=0; i<3; i++)
    {
        Cities where=Enter();
    }

    printf("Printing the three cities: \n");

    for(int i=0; i<3; i++)
    {Show(where[i]);}

    return 0;

}