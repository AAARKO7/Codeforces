/*Sereja and Dima(381A)*/

#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    int a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int s=0,d=0;
    int i=0,j=n-1;
    int max; 
    int count=0;
 
    while (i<=j) 
    {
        if(a[i]>a[j]) 
        {
            max=a[i];
            i++;
        }
        else 
        {
            max=a[j];
            j--;
        }
 
        if(count%2==0) 
        {
            s=s+max;
            count++;
        }
        else 
        {
            d=d+max;
            count++;
        }
    }

    printf("%d %d",s,d);
}