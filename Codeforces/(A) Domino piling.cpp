#include<stdio.h>
#include<math.h>
#include<stdlib.h>
 
int main()
{
    long long int n,m,a,sum,nai,temp;
    scanf("%I64d %I64d",&n,&m);
    sum=(  m*n/2);
    //nai=ceil((double)m/2);
    printf("%I64d\n",sum);
    return 0;
}