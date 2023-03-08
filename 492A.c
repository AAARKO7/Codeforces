/*Vanya and Cubes(492A)*/

#include<stdio.h>

int main()
{
    int n;
 
    scanf("%d",&n);
 
    int x=0;
    int sum=0;
    int i=0;
    int y=n-sum;
 
    while ((sum<n)&&y>=(x+i+1))
    {
        i++;
        x=x+i;
        sum=sum+x;
        y=n-sum;
    }
    printf("%d",i);
    
}