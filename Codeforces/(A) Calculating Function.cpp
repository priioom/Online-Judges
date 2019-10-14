#include<cstdio>
int main()
{
    long long int a,i,n,b,sum,sum1;
    //a=0;b=0;
    scanf("%I64d",&n);
    a=n/2;
    b=a;
    if(n%2==1)
    {
        b++;
        printf("%I64d",-b);
    }
    else
         //{printf("%I64d",a);}
 
         printf("%I64d",b);
 
}