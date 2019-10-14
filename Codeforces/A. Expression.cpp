#include<stdio.h>
#include<math.h>
#include<string.h>
 
using namespace std;
 
 
int main()
{
    long long int a,b,c,sum,sum1,sum2,sum3,sum4;
    scanf("%I64d %I64d %I64d",&a,&b,&c);
    sum=(a+b)*c;
    sum1=a*b*c;
    sum2=a*(b+c);
    sum3=a+b*c;
    sum4=a+b+c;
    if(sum>=sum1&&sum>=sum2&&sum>=sum3&&sum>=sum4)
    {
        printf("%I64d\n",sum);
        //break;
    }
    else if(sum1>=sum&&sum1>=sum2&&sum1>=sum3&&sum1>=sum4)
    {
        printf("%I64d\n",sum1);
        //break;
    }
    else if(sum2>=sum1&&sum2>=sum&&sum2>=sum3&&sum2>=sum4)
    {
        printf("%I64d\n",sum2);
        //break;
    }
    else if(sum4>=sum&&sum4>=sum1&&sum4>=sum2&&sum4>=sum3)
    {
        printf("%I64d\n",sum4);
        //break;
    }
    else
        printf("%I64d\n",sum3);
 
 
    return 0;
}
 