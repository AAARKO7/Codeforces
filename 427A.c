/*Police Recruits (427A)*/

#include<stdio.h>
 
int main()
{
    int n,i;
    int sum=0;
    
    scanf("%d",&n);
    
    int a[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            sum++;
        }
        else if(a[i]>0)
        {
            a[i+1]=a[i]+a[i+1];
        }
    }
    
    printf("%d",sum);  
}