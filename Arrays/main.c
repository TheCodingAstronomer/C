#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNums[] = {4,8,15,16,23,42};
    printf("%d \n", luckyNums[5]);
    luckyNums[3] = 45;
    printf("%d \n", luckyNums[3]);
    int lucky[7];
    lucky[0] = 78;
    printf("%d \n", lucky[0]);
    printf("%d", lucky[98]);
    return 0;
}
