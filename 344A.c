/*Magnets (344A)*/

#include<stdio.h>

int main()
{
    int n,x=1,i;
    int A[100000];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);  
    }

    for(i=0;i<n-1;i++)
    {
        if(A[i]!=A[i+1])
        {
            x++;
        }
    }

    printf("%d",x);
     
}