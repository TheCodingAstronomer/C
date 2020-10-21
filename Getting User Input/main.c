#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    printf("Enter Your Name: ");
    //scanf("%c,%d,%f,%lf"); /* %c = char, %d = int, %lf = double/float, %s = char[] */
    fgets(name, 20, stdin);
    printf("Your name is %s.", name);

    return 0;
}
