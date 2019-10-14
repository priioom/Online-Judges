#include<stdio.h>
#include<math.h>
#define pf       printf
#define sf       scanf
int main()
{
     int n,f=0;
 
    sf("%d",&n);
    int m = n;
    int a=m/10;
    int b=n%10;
    if(n==0)
    {
        pf("zero\n");
        return 0;
    }
    if(n==10)
    {
        pf("ten\n");
        return 0;
    }
    if(n==11)
    {
        pf("eleven\n");
        return 0;
    }
    if(n==12)
    {
        pf("twelve\n");
        return 0;
    }
    if(n==13)
    {
        pf("thirteen\n");
        return 0;
    }
    if(n==14)
    {
        pf("fourteen\n");
        return 0;
    }
    if(n==15)
    {
        pf("fifteen\n");
        return 0;
    }
    if(n==16)
    {
        pf("sixteen\n");
        return 0;
    }
    if(n==17)
    {
        pf("seventeen\n");
        return 0;
    }
    if(n==18)
    {
        pf("eighteen\n");
        return 0;
    }
    if(n==19)
    {
        pf("nineteen\n");
        return 0;
    }
    if(a > 0) f = 1;
    if(a == 2)
    {
        pf("twenty");
        //return 0;
    }
    if(a == 3)
    {
        pf("thirty");
        //return 0;
    }
    if(a == 4)
    {
        pf("forty");
        //return 0;
    }
    if(a == 5)
    {
        pf("fifty");
        //return 0;
    }
    if(a == 6)
    {
        pf("sixty");
        //return 0;
    }
    if(a == 7)
    {
        pf("seventy");
        //return 0;
    }
    if(a == 8)
    {
        pf("eighty");
        //return 0;
    }
    if(a == 9)
    {
        pf("ninety");
        //return 0;
    }
    if(a!=0 && b!=0) pf("-");
 
    if(b==1)   pf("one");
    else if(b==2)  pf("two");
    else if(b==3)  pf("three");
    else if(b==4)  pf("four");
    else if(b==5)  pf("five");
    else if(b==6)  pf("six");
    else if(b==7)  pf("seven");
    else if(b==8)  pf("eight");
    else if(b==9)  pf("nine");
 
 
    pf("\n");
 
 
 
 
	return 0;
}
