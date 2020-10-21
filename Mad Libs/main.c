#include <stdio.h>
#include <stdlib.h>

int main()
{
    char col[20];
    char pln[20];
    char celf[20];
    char cels[20];

    printf("Enter a colour: ");
    scanf("%s", &col);

    printf("Enter a plural noun: ");
    scanf("%s", &pln);

    printf("Enter a celebrity's name: ");
    scanf("%s%s", &celf, &cels);

    printf("Roses are %s \n", col);
    printf("%s are blue,\n", pln);
    printf("I love %s %s.\n", celf, cels);
    return 0;
}
