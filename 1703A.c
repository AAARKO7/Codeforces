/*YES or YES? (1703A)*/

#include<stdio.h>

int main()
{
    int n,i,j;
    char s[100];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",&s);

         if(s[0]=='Y' && s[1]=='E' && s[2]=='S')
        {
            printf("YES");
        }

        else if(s[0]=='y' && s[1]=='e' && s[2]=='s')
        {
            printf("YES");
        }

        else if(s[0]=='Y' && s[1]=='e' && s[2]=='s')
        {
            printf("YES");
        }

         else if(s[0]=='y' && s[1]=='E' && s[2]=='s')
        {
            printf("YES");
        }

         else if(s[0]=='y' && s[1]=='e' && s[2]=='S')
        {
            printf("YES");
        }

         else if(s[0]=='Y' && s[1]=='E' && s[2]=='s')
        {
            printf("YES");
        }

         else if(s[0]=='Y' && s[1]=='e' && s[2]=='S')
        {
            printf("YES");
        }

         else if(s[0]=='y' && s[1]=='E' && s[2]=='S')
        {
            printf("YES");
        }

        else 
        {
            printf("NO");
        } 

        printf("\n");
    }   
        
}