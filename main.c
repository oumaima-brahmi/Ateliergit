#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("donner la valeur de x,y \n");
    scanf("%d%d",&x,&y);
    printf("la diff est %d\n",x-y);
    z=x;
    x=y;
    y=z;
    printf("la diff est %d \n",x-y);
    return 0 ;
}
