/*Hit the Lottery(996A)*/

#include<stdio.h>

int main()
{
    int n;
    
    scanf("%d",&n);

    int sum=0;

    while(n/100>0)
    {
        sum=n/100;
        n=n%100;
    }
    while(n/20>0)
    {
        sum=sum+n/20;
        n=n%20;
    }
    while (n/10>0)
    {
        sum=sum+n/10;
        n=n%10;
    }
    while(n/5>0)
    {
        sum=sum+n/5;
        n=n%5;
    }
    while(n/1>0)
    {
        sum=sum+n/1;
        n=n%1;
    }
    printf("%d",sum);
}