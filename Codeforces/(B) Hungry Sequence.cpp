#include<stdio.h>
#include<math.h>
long long int  N = 10000000;
long long int  status[10000000];
 
 
 
int main()
{
    long long int i,n, j,d;
    scanf("%I64d",&n);
    for( i = 2; i <= N; i++ )
        status[i] = 0;
        for( i = 3; i <= N; i += 2 )
        {
            if( status[i] == 0 )
            {
                for( j = i * i; j <= N; j += i + i )
                    status[j] = 1;
            }
        }
    printf("2 ");
    d=0;
    for( i = 3; i <= N; i += 2 )
    {
        if( status[i] == 0 )
        {
            d++;
            if(d!=n)
            printf("%I64d ", i);
            else
                break;
 
 
        }
    }
    return 0;
}