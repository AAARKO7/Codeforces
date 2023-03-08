/*Spy Detected!(1512A)*/

#include<stdio.h>

int main()
{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        int n;
        
        scanf("%d",&n);

        int a[n];
        
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(int i=0;i<n;i++)
        {
            if(a[i]!=a[i+1])
            {
                if(i==0)
                {
                    if(a[0]==a[2])
                    {
                        printf("%d\n",i+2);
                        break;
                    }
                    else
                    {
                        printf("%d\n",i+1);
                        break;
                    }
                }
                else
                {
                    printf("%d\n",i+2);
                    break;
                }
            }
        }
    }
}