#include<stdio.h>
#include<math.h>
#include<string.h>
 
using namespace std;
 
 
int main()
{
    long long int k,n,i,j,nai,temp,huda;
    scanf("%I64d %I64d",&n,&k);
    if(n%2==0)
    {
        if(k<=n/2)
        {
            temp=(2*k)-1;
            printf("%I64d",temp);
        }
        else
        {
            nai=k-n/2;
            temp=(2*nai);
            printf("%I64d  ",temp);
        }
    }
    else
    {
 
        if(k<=n/2+1)
        {
            temp=(2*k)-1;
            printf("%I64d",temp);
        }
        else
        {
            nai=k-(n/2+1);
            temp=(2*nai);
            printf("%I64d  ",temp);
        }
    }
 
    return 0;
}