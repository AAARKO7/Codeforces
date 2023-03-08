/*Panoramix's Prediction(80A)*/

#include<stdio.h>

int main()
{
    int a,b,x;
    int count=0;

    scanf("%d%d",&a,&b);

    for(int i=a+1;i<=50;i++)
   {

      count=0;

      for(int j=2;j<i;j++)
      {
         if(i%j==0)
         {
            count=1;
            break;
         }
      }

      if(count==0)
      {
        x=i;
        break;
      }
   }
       
    if(x==b)
   {
    printf("YES\n");
   }

   else
   {
    printf("NO\n");
   }    
}