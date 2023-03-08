/*The New Year: Meeting Friends (723A)*/

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    if(a>b && b>c || a<b && b<c)
    {   
        int x=abs(b-a)+abs(b-c);
        printf("%d",x);
    }

    else if(b>a && a>c || b<a && a<c)
    {
        int y=abs(a-b)+abs(a-c);
        printf("%d",y);
    }

    else
    {
        int z=abs(c-a)+abs(c-b);
        printf("%d",z);
    }
 
}

