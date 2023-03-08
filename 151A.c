/*Soft Drinking(151A)*/

#include<stdio.h>

int main()
{
    int n,k,l,c,d,p,nl,np;

    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);

    int a[3];

    a[0]=k*l/nl;
    a[1]=c*d;
    a[2]=p/np;

    int x=a[0]; // minimum value

    for(int i=0;i<3;i++)
    {
        if(x>a[i])
        {
            x=a[i];
        }
    }
    printf("%d",x/n);
}