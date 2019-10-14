#include<cstdio>
int main()
{
    int t,p,c,i,j,a,sum,room;
    room=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       // a=0;
        scanf("%d %d",&p,&c);
 
    //}
     //room=0;
   // for (j=0;j<t;j++)
    //{
       //
        sum=c-p;
        if (sum>=2)
           {
               room+=1;
               //printf("");
           }
        else
        {//room=0;
            //room+=1;
            }
    //}
   // a+=room;
     //printf("%d  ",i);
     }
    printf("%d",room);
    return 0;
}