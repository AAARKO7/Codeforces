/*Balanced Array(1343B)*/

#include<stdio.h>
int main()
{
    int t ;

    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);

        if((n/2)%2!=0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");

            int a[n];
            int k=1;
            for(int j=0;j<n;j++)
            {
                if(j<n/2)
                {
                    a[j]=2*(j+1);
                    printf("%d ",a[j]);
                }
                else if(j>=n/2 && j!=n-1)
                {
                    a[j]=k;
                    k+=2;
                    printf("%d ",a[j]);
                }
                else if(j==n-1)
                {
                    a[j]=a[n/2-1]+(n/2-1);
                    printf("%d ",a[j]);
                }
            }
        }
        printf("\n");
    }
}