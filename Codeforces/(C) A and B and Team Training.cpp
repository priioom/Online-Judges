#include<stdio.h>
int main()
{
    int long long n,m,b,a,c,d,e;
    while (scanf("%I64d %I64d",&n,&m)==2)
        {
 
 
 
 
            a=n+m;
            b=a%3;
            d=a/3;
       if(a>3||a==3)
       {
            if(n==0||m==0)
            {printf("0\n");}
 
            else {
                    if(n<2)
                    {
                        printf("%I64d\n",n);
                    }
                    else if(m<2)
                    {
                       printf("%I64d\n",m);
                    }
 
               else if (n>m&&b!=0)
         {
              c=n/2;
             if(m>c)
             {
                 if(d>m)
                 {
                   printf("%I64d\n",m);
                 }
                 //a=n+m;
                 //d=a/3;
                 else
                {printf("%I64d\n",d);}
             }
             else
                {printf("%I64d\n",m);}
            // c=m/2;
            //int d=n/2;
            //if()
            // printf("%I64d\n",m);
         }
         else if (n>m&&b==0)
         {
             c=a/3;
            if(c>m)
                {
                    printf("%I64d\n",m);
                }
             //c=a/3;
             else
             {printf("%I64d\n",c);}
         }
 
 
 
 
         else if (m>n&&b!=0)
         {
              c=m/2;
             if(n>c)
             {
                 if(d>n)
                 {
                   printf("%I64d\n",n);
                 }
                 else if(d==n)
                 {printf("%I64d\n",d);}
                 else
                 {printf("%I64d\n",d);}
             }
             else
                printf("%I64d\n",n);
         }
         else if(m>n&&b==0)
         {  c=a/3;
             if(c>n)
                {
                    printf("%I64d\n",n);
                }
             //c=a/3;
             else
             {printf("%I64d\n",c);}
 
         }
 
 
 
 
         else if(m==n)
         {
             if(m%2!=0)
             {
                 c=(m/2)+1;
                 printf("%I64d\n",c);
             }
             else
             {
                c=m/2;
                a=m+n;
                e=a/3;
                if(e>c)
                {
                    printf("%I64d\n",e);
                }
                else
                {printf("%I64d\n",c);}
             }
         }
 
 
 
 
 
 
 
            }
 
 
 
 
 
       }
       else
        {printf("0\n");}
 
 
 
 
        }
 
    return 0;
}
