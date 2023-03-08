/*Beautiful Matrix (263A)*/

#include<stdio.h>
#include<math.h>

int main()
{
    int A[5][5];
    int i,j,x,y;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&A[i][j]);
            
            if(A[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }

    printf("%d", (abs(x-2)+abs(y-2)));
}