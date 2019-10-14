#include<cstdio>
int main()
{
    int a,b,c,d,e,ans,j,i;//a=0;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int sum=a+b+c+d+e;
 
    //int sol=ans/5;
    if(sum==0)  printf("-1\n");
 
    else if(sum %5==0)
    {
         int sol=sum/5;
        printf("%d",sol);
 
    }
    else
         printf("-1\n");
}