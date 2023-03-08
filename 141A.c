/*Amusing Joke(141A)*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[101],s2[101],s3[101];

    scanf("%s%s%s",s1,s2,s3);

    if(strlen(s1)+strlen(s2)>100)
    {
        printf("NO");
    }
    else
    {
        strcat(s1,s2);
 
    for(int i=0;i<strlen(s1);i++)
    {
        for(int j=i+1;j<strlen(s1);j++)
        {
            if(s1[i]>s1[j])
            {
                char temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp ;
            }
        }
    }
    for(int i=0;i<strlen(s3);i++)
    {
        for(int j=i+1;j<strlen(s3);j++)
        {
            if(s3[i]>s3[j])
            {
                char temp=s3[i];
                s3[i]=s3[j];
                s3[j]=temp ;
            }
        }
    }
        
        int sum=strcmp(s1,s3);

    if(sum==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    } 
}