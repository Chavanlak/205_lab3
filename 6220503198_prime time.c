#include<stdio.h>
int main()
{
    int i,n,time[48]={0},prime,sum=0;
    int a,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d %d",&p,&a);
       time[p-1] += a;
    }
    for(i=0;i<48;i++)
    {
        if(sum<time[i])
        {
            sum = time[i];
            prime=i;
        }
    }
    printf("%d %d",prime+1,time[prime]);
    return 0;


}
