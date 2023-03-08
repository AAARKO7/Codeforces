/*Helpful Maths (339A)*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];

    gets(s);

    int x=strlen(s);

    char temp=s[0];

   for(int i=0;i<x;i+=2)
   {    
        for(int j=i+2;j<x;j+=2)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
   }
    printf("%s",s);
}