#include<stdio.h>
#include<math.h>
#include<string.h>
 
int main()
 
{
   long long int x,y,z,n,j,i,sum,sum2,sum1,temp,temp1,temp2,huda;
    temp1=0;temp=0;temp2=0;sum2=0;sum1=0;sum=0;
    scanf("%I64d",&n);
    temp=0;huda=0;
    for(i=0;i<n;i++)
    {
            scanf("%I64d %I64d %I64d",&x,&y,&z);
 
                 temp=sum+x;
                 sum=temp;
                 temp1=sum1+y;
                 sum1=temp1;
                 temp2=sum2+z;
                 sum2=temp2;
                    //sum=sum+temp+temp1+temp2;
 
    }
    //int ans=sum1-(sum);
      //printf("%d %d %d\n",temp,temp1,temp2);
      //printf("%I64d",sum);
    if(temp==0&&temp1==0&&temp2==0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}