/*Sum of Round Numbers(1352A)*/

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

		int arr[4];
		
		for(int i=0; i<t; i++) {
		    int count=0;
		    int ar[1000];
			int a;
			scanf("%d",&a);
			if(a-a%1000!=0) {
			    
				ar[count]=(a-a%1000);
				count++;
			}
			a=a%1000;
			if(a-a%100!=0) {
				ar[count]=(a-a%100);
				count++;
			}
			a=a%100;
			if(a-a%10!=0) {
				ar[count]=(a-a%10);
				count++;
			}
			a=a%10;
			if(a!=0) {
				ar[count]=(a);
				count++;
			}
			printf("%d",count);
			printf("\n");
			for (int i = 0; i < count; i++){
             printf("%d",ar[i]);
             printf(" ");
			}
			 printf("\n");
    }
}