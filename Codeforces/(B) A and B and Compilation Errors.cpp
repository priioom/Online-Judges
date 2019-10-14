#include<cstdio>
#include<string.h>
int main()
{
    int t,n,i,j,a,re,re1,b;
    scanf("%d",&t);
    int sum=0;int sum1=0;int sum2=0;
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        sum+=n;
    }
    for(i=0;i<t-1;i++)
    {
        scanf("%d",&a);
        sum1+=a;
    }
    for(i=0;i<t-2;i++)
    {
        scanf("%d",&b);
        sum2+=b;
    }
    re=sum-sum1;
    re1=sum1-sum2;
    printf("%d\n%d\n",re,re1);
    return 0;
}