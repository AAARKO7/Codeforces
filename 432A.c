/*Choosing Teams(432A)*/

#include<stdio.h>

void solve(int n,int k)
{
    int a[n];
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(5-a[i]>=k)
        {
            count++;
        }
    }   
    printf("%d",count/3);
}

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);

    solve(n,k);

    return 0;
}