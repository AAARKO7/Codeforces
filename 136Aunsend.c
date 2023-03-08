/*Presents(136A)*/

#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    int A[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    for(int i=1;i<=n;i++)
    {
        printf("%d ",A[i]);
    }
           
}