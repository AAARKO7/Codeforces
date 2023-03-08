/*Nearly Lucky Number (110A)*/

#include<stdio.h>
 
int main()
{
   long long int n ;
    int sum=0;
 
    scanf("%lld",&n);
 
    while (n!=0)
    {
        if(n%10==4||n%10==7)
        {
            sum++;
        }
        n=n/10;
    }
    if(sum==4||sum==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
