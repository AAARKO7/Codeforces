/*George and Accommodation (467A)*/

#include<stdio.h>

int main()
{
    int n,i,x,y,z,w=0;

    scanf("%d",&n);

   for(i=0;i<n;i++)
   {
        scanf("%d%d",&x,&y);

        z=y-x;
        
        if(z>=2)
        {
            w++;
        }
   }

    printf("%d",w);


}