#include<stdio.h>
int main()
{
    long long int k,n,w,temp,sum,sum1,nai;
    int i;
    sum1=0;
    scanf("%I64d %I64d %I64d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        temp=k*i;
        sum=sum1+temp;
        sum1=sum;
    }
    nai=sum-n;
    if(nai>0)
    printf("%I64d\n",sum-n);
    else
        printf("0\n");
}