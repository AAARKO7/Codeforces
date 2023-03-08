/*Games(268A)*/

#include<stdio.h>

int main()
{
    int n;
    int sum=0;

    scanf("%d",&n);

    int A[n],B[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&A[i],&B[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i]==B[j])
            {
                sum++;
            }
        }
    }
    printf("%d\n",sum);
}