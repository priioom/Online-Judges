#include<stdio.h>
#include<string.h>
#include<math.h>
#include<iostream>
#include<algorithm>
 
int main()
{
    long long int a,b,n,c,x,i;;
 
    scanf("%I64d",&n);
    c=0;x=0;
    for(i=0; i<n; i++)
    {
        scanf("%I64d %I64d",&a,&b);
        if(b>a)
        {
         c=1;
        }
    }
    if(c)
    {
        printf("Happy Alex\n");
    }
    else
        printf("Poor Alex\n");
 
    return 0;
}