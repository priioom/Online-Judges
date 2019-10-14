#include<stdio.h>
int main()
{
    long long int n,i,temp;
    scanf("%I64d",&n);
    if(n < 10)
    {
        printf("%I64d\n",n);
    }
    if(n <= 99 && n>=10)
    {
        temp=0;
        for( i=10;i<=n;i++)
        {
            temp++;
        }
        long long int sum=temp*2+9;
        printf("%I64d",sum);
    }
    if(n <=999 && n>=100)
    {
         temp=0;
        for( i=100;i<=n;i++)
        {
            temp++;
        }
        long long int sum=temp*3+189;
        printf("%I64d",sum);
    }
     if(n <=9999 && n>=1000)
    {
         temp=0;
        for( i=1000;i<=n;i++)
        {
            temp++;
        }
        long long int sum=temp*4+2889;
        printf("%I64d",sum);
    }
     if(n <=99999 && n>=10000)
    {
         temp=0;
        for( i=10000;i<=n;i++)
        {
            temp++;
        }
        long long int sum=temp*5+38889;
        printf("%I64d",sum);
    }
    if(n <=999999 && n>=100000)
    {
         temp=0;
        for( i=100000;i<=n;i++)
        {
            temp++;
        }
        long long int sum=temp*6+488889;
        printf("%I64d",sum);
    }
    if(n <=9999999 && n>=1000000)
    {
         temp=0;
        for( i=1000000;i<=n;i++)
        {
            temp++;
        }
        long long int sum=temp*7+5888889;
        printf("%I64d",sum);
    }
    if(n <=99999999 && n>=10000000)
    {
         temp=0;
        for( i=10000000;i<=n;i++)
        {
            temp++;
        }
        long long int sum=temp*8+68888889;
        printf("%I64d",sum);
    }
    if(n <=999999999 && n>=100000000)
    {
         temp=0;
        for(i=100000000;i<=n;i++)
        {
            temp++;
        }
        long long int sum=temp*9+788888889;
        printf("%I64d",sum);
    }
     if(n <=9999999999 && n>=1000000000)
    {
         temp=0;
        for( i=1000000000;i<=n;i++)
        {
            temp++;
        }
        long long int sum=temp*10+8888888889;
        printf("%I64d",sum);
    }
    return 0;
}