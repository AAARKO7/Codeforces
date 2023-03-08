/*I Wanna Be the Guy(469A)*/

#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    int a[202];
    int p,q;

    scanf("%d",&p);

    for(int i=0;i<p;i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&q);

    int x = p+q;
    for(int i=p;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
  
    int temp ;
    for(int i=0;i<x;i++)
    {
       for(int j=i+1;j<x;j++)
       {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
       }
    }
    int sum=0;
    for(int i=0;i<x;i++)
    {
        if(a[i]==a[i+1])
        {
            a[i]=0;
        }
        sum=sum+a[i];
    }

    int y=n*(n+1)/2;

    if (sum==y)
    {
        printf("I become the guy.");
    }
    else
    {
        printf("Oh, my keyboard!");
    }

}