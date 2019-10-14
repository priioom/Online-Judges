#include<stdio.h>
#include<math.h>
int main()
{
    double n,sum,ans,temp;
    int arr[101];
    int i;
    scanf("%lf",&n);
    temp=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        sum=temp+arr[i];
        temp=sum;
    }
    ans=sum/n;
    printf("%.12lf",ans);
    return 0;
}