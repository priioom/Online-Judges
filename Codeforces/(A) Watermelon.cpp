#include<stdio.h>
#include<math.h>
#include<stdlib.h>
 
int main()
{
    long long int n,m,a,sum,nai,temp;
    scanf("%I64d",&n);
   if(n==2)
   {
       printf("NO");
   }
   else if(n%2==0)
   {
        printf("YES");
   }
   else
    printf("NO");
   return 0;
}