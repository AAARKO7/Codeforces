/*Arrival of the General(144A)*/

#include<stdio.h>

int main()
{
    int n ; 
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int max=0;
    int min=a[0];
    int x,y;

    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            x=i;
        }
        if(a[i]<=min)
        {
            min=a[i];
            y=i;
        }
    }

    if(x>y)
    {
        printf("%d",x+n-y-2);
    }
    else
    {
        printf("%d",x+n-y-1);
    }
}