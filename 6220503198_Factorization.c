#include<stdio.h>
int main()
{
    int k,n=0,x=2;
    scanf("%d",&k);
    if(k==1)
    {
        printf("1\n");
    }
    while(k!=1)
    {
        while(k%x==0)
        {
            printf("%d\n",x);
            k/=x;

        }
        x++;

    }
    printf("%d",n);
    return 0 ;
}
