/*Tram(116A)*/

#include<stdio.h>

int main()
{
    int n;
    int a,b;

    scanf("%d",&n);

    int A[n];
    int temp=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);

        A[i]=temp-a+b ;
        temp=A[i];
    }
        
        int x=A[0];

    for(int i=0;i<n;i++)
    {
        if(A[i]>x)
        {
            x=A[i];
        }
    }
    printf("%d",x);
}