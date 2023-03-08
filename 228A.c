/*Is your horseshoe on the other hoof?(228A)*/

#include<stdio.h>

int main()
{
    int A[4];
    int sum=0;
    int temp;

    for(int i=0;i<4;i++)
    {
        scanf("%d",&A[i]);
    }

    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }

    for(int i=0;i<4;i++)
    {
        if(A[i]==A[i+1])
        {
            sum++;
        }
    }
    printf("%d\n",sum);
}