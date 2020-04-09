#include <stdio.h>
#include <stdlib.h>

//1~1000 addition

int
adt()
{
    int x=0;
    for (int i=1; i<1001; i++)
    {
        x+=i;
    }
    return x;
}

int
main()
{
    int r=adt();
    printf("1から1000までの和は%dです\n",r);
}