#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long int nai,j,i,n,m,sum1,sum,nai1;
    scanf("%I64d %I64d",&n,&m);
    nai=0;
    sum1=0;
    nai1=0;
    if(m>n)
    {
        printf("-1\n");
    }
    else if(n%2==0)
    {
       sum=n/2;
       if(sum%m==0)
       {
           printf("%I64d",sum);
       }
       else
       {
           for(i=1;i<=sum;i++)
           {
             sum1=sum+1;
             sum=sum1;
             if(sum1%m==0)
             {
                 printf("%I64d\n",sum1);
                 break;
             }
           }
       }
    }
    else
    {
        sum=n/2+1;
       if(sum%m==0)
       {
           printf("%I64d",sum);
       }
       else
       {
           for(i=1;i<=sum;i++)
           {
             sum1=sum+1;
             sum=sum1;
             if(sum1%m==0)
             {
                 printf("%I64d\n",sum1);
                 break;
             }
           }
       }
    }
 
 
}