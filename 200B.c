/*Drinks(200B)*/

#include<stdio.h>
 
int main()
{
    int n;
    float j;
    float sum=0.00; 
 
    scanf("%d",&n);
 
    for(int i=0;i<n;i++)
    {
        scanf("%f",&j);
        sum=sum+j;  
    }
    printf("%f",sum/n);
}