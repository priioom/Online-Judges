#include<stdio.h>
#include<math.h>
int main()
{
    int sum,n,j,i,temp,nai;
    scanf("%d",&n);
    //sum=0;//temp=0;
    for(i=4; i<=n/2; i+=2)
    {
        sum=n-i;
        //printf("%d",sum);
        //n=sum;
        temp=0;
        for(j=2;j<=sqrt(sum);j++)
        {
            if(sum%j==0)
            {
              temp = 1;
              break;
            }
            //else
              //  continue;
 
        }
        if(temp) { printf("%d %d",i,sum); break; }
 
    }
}