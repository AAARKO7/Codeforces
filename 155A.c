/*I_love_%username%(155A)*/

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
    
    int count=0;
    int max=a[0];
    int min=a[0];
    
    for(int i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            count++;
        }
        else if(max<a[i])
        {
            max=a[i];
            count++;
        }
    }
    printf("%d",count);
}