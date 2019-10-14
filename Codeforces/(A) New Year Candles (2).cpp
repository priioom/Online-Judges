#include<cstdio>
int main()
{
    int c,n,sum,a,i;
    scanf("%d %d",&c,&n);
    //a=
    a=0;
    sum=0;
    //int solve(int a, int b)
{
    //i//nt r = 0, u = 0;
    while (c > 0) {
        c --;
         a+= 1;
        sum++;
        if (sum >= n) {
            c ++;
            sum -= n;
        }
    }
printf("%d",a);
}
 
}