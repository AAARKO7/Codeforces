/*Queue at the School(266B)*/

#include<stdio.h>

int main()
{
    int n,t;

    scanf("%d%d",&n,&t);
    
    char s[n];

    scanf("%s",s);

    for(int i=1;i<=t;i++)
    {
        
       for(int j=0;j<n-1;j++)
            {
                if(s[j]=='B' && s[j+1]=='G')
                {
                    s[j]='G';
                    s[j+1]='B';

                    j++;
                }    
            }                     
    }       
    printf("%s",s);   
}