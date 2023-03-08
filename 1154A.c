/*Restoring Three Numbers(1154A)*/

#include<stdio.h>

int main()
{
    int array[4];

    for(int i=0;i<4;i++)
    {
        scanf("%d",&array[i]);
    }

    int max=array[0];
    for(int i=0;i<4;i++){
        if(array[i]>max)
        {
            max=array[i];
        }
    }

    for(int i=0;i<4;i++)
    {
        if(max!=array[i])
        {
            printf("%d ",max-array[i]);
        }
    }
    printf("\n");
}