/*Beautiful Year(271A)*/

#include<stdio.h>
 
int main()
{
    int y;
 
    scanf("%d",&y);
 
    y++;
 
    while(1)
    {
        int d=y%10;
        int temp=y/10;
        int c=temp%10;
        temp=temp/10;
        int b=temp%10;
        int a=temp/10;
 
        if(a!=b && b!=c && c!=d && d!=a && a!=c && b!=d)
        {
            printf("%d",y);
 
            break;
        }
        y++;
    }
}