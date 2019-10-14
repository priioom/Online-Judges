#include<cstdio>
int main()
{
      int a , b; //cnt = 0;
    scanf("%d %d", &a , &b);
    int k = a;
    for(int i = 1 ; i <= k; i++)
    {
        if(i % b == 0) k++;
        //printf("%d",k);
        //cnt++;
    }
    printf("%d", k);
}