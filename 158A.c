/*Next Round (158A)*/

#include <stdio.h>
 
int main()
{
   int n,k,i,j,m=0,a;
   int A[100];
   
   scanf("%d %d",&n,&k);
   
   for(i=1;i<=n;i++)
   {	
   	  scanf("%d",&a);
   	  A[i]=a;
   }
   		
   	for(j=1;j<=n;j++)
   	{
   	  	if(A[j]>=A[k] && A[j]>0)
   		{
    		m++;
   			
   		}	 	
   }
   
  		printf("%d",m);
		
}