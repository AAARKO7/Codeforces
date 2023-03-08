/*Bit++ (282A)*/

#include<stdio.h>

int main()
{
    int n,i,y=0,z;
    
    scanf("%d",&n);
    
    char s[100];

    for(i=0;i<n;i++)
    {
        scanf("%s",&s);

        if(s[0]=='X' && s[1]=='+' && s[2]=='+')
        {
            z=1;
        }

        else if(s[0]=='+' && s[1]=='+' && s[2]=='X')
        {
            z=1;
        }

        else
        {
            z=-1;
        }


        y=y+z;
               
    }
        
        printf("%d",y);

}