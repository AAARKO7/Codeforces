/*Holiday Of Equality(758A)*/

#include<stdio.h>

int main()
{
    int n;
    int sum=0;
    
    scanf("%d",&n);

    int A[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    int max=A[0];

    for(int i=0;i<n;i++)
    {
        if(max<A[i])
        {
            max=A[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        sum=sum+(max-A[i]);
    }

    printf("%d",sum);
}