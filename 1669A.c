/*Division? (1669A)*/

#include<stdio.h>

int main()
{
    int n,i,m;
    

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&m); 

        if(1900<=m)
            {
                printf("Division 1");
            }

            else if(1600<=m && m<=1899)
            {
                printf("Division 2");
            }

            else if(1400<=m && m<=1599)
            {
                printf("Division 3");
            }

            else
            {
                printf("Division 4");
            }

            printf("\n");       
    }   
} 