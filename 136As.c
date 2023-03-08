/*Presents(136A)*/

#include<stdio.h>

int main()
{
    int n ;
    scanf("%d",&n);
    int array[n];

    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&array[i]);
    }
    
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(i==array[j])
            {
                printf("%d ",j+1);
            }
        }
    }
    printf("\n");
}