#include<cstdio>
#include<string.h>
int main()
{
    int n=8;
    char ar[n][n];
    int i,j;
    for (i=0;i<n;i++)
    {
        scanf("%s",ar[i]);
    }
    int sum1=0,sum2=0;
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ar[i][j] >='A' && ar[i][j] <='Z')
            {
                if(ar[i][j]=='Q')                    sum1+=9;
                    else if(ar[i][j]=='R')           sum1+=5;
                    else if(ar[i][j]=='B')           sum1+=3;
                    else if(ar[i][j]=='N')           sum1+=3;
                    else if(ar[i][j]=='P')           sum1+=1;
                    else if(ar[i][j]=='K')           sum1+=0;
 
            }
            if(ar[i][j] >='a' && ar[i][j] <='z')
            {
                if(ar[i][j]=='q')                    sum2+=9;
                    else if(ar[i][j]=='r')           sum2+=5;
                    else if(ar[i][j]=='b')           sum2+=3;
                    else if(ar[i][j]=='n')           sum2+=3;
                    else if(ar[i][j]=='p')           sum2+=1;
                    else if(ar[i][j]=='k')           sum2+=0;
 
            }
 
 
        }
 
 
    }
   //printf("%d %d\n",sum1,sum2);
    if(sum1==sum2) {printf("Draw");}
        else if(sum1>sum2) {printf("White");}
        else
            {printf("Black");}
}