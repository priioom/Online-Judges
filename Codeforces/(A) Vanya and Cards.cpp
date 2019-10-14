#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,m,i,ans,sum,flag;
    int temp=0;
    int arr[1001];
    scanf("%d %d",&n,&m);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
        sum=temp+arr[i];
        temp=sum;
    }
    // printf("%d",sum);
    if(sum==0)
    {
        printf("0\n");
    }
    else if(sum>0)
    {
        if(sum%m==0)
        {
            printf("%d",sum/m);
        }
        else
            printf("%d",sum/m+1);
    }
    else if(sum<0)
    {
        ans=-sum;
        if(ans%m==0)
        {
            //ans=-(sum/2);
            printf("%d",ans/m);
        }
        else
        {
            //ans=-(sum/2);
            printf("%d",ans/m+1);
        }
    }
}