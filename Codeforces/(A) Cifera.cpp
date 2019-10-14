#include<stdio.h>
#include<math.h>
#include<algorithm>
 
int main()
{
    long long int n,c,d,m,nai,sum,i,j;
    scanf("%I64d %I64d",&m,&n);
    sum=1;
    c=0;d=0;
    int huda=n%m;
    if(huda==0)
    {
        for(j=1; j<=1000; j++)
        {
 
            nai= sum*m;
            sum=nai;
            //printf("%I64d\n",sum);
            c++;
            if(nai==n)
            {
                d=1;
                break;
 
            }
        }
        if(d)
        {
            printf("YES\n");
            printf("%I64d\n",c-1);
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
 
            printf("NO\n");
    }
    return 0;
}