#include<stdio.h>
#include<math.h>
 
using namespace std;
 
int main()
{
    long long int k,l,m,n,d,i,j;
    int temp=0;
    scanf("%I64d %I64d %I64d %I64d %I64d",&k ,&l ,&m ,&n ,&d);
    if(k==1||l==1||m==1||n==1)
    {
        printf("%d\n",d);
    }
    else
    {
 
        for(i=1; i<=d; i++)
        {
            if(i%k==0)
            {
                j=1;
            }
            else if(i%l==0)
            {
                j=1;
            }
            else if(i%m==0)
            {
                j=1;
            }
            else if(i%n==0)
            {
                j=1;
            }
            else
            {
                temp++;
            }
        }
 
        printf("%d\n",d-temp);
    }
    return 0;
}