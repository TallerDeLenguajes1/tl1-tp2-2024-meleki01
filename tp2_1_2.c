#include <stdio.h>
#include <stdlib.h>
#define N 10



int main()
{
    int i;
    double vt[N],*punt;

    for(i = 0;i<N; i++)
    {
    vt[i]=1+rand()%100;
    }

    printf("\n\n");
    for (int i = 0; i < N; i++)
    {

        printf("[%d]= %.2f \n",i, *(vt+i));
    }

    return 0;
}

