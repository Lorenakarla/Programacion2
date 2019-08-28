#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec1[5];
    int vec2[] = {1,2,3,4,5};
    int vec3[5] = {0};
    int vec4[5] = {1,2};
    int vec5[5] = {1,2,3,4,5,6,7,8};
    int i;

    for(i=0;i<20;i++){
        printf("%d", vec5[i]);
    }
        printf("\n");
        printf("%p\n", vec5);

    return 0;
}
