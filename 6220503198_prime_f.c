#include<stdio.h>

    int function(int x)
    {
        int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return 0;
        }

    }

}
int main()
{
    int x,min,max,i;
    scanf("%d",&x);
    for(i=x;;i++)
    {
        if(function(i))
        {
            max =i;
            break;
        }
    }
    min =max;
    for(i=x;i>1;i--)
    {
        if(function(i))
        {
            if(function(i))
            {
                min = i;
                break ;
            }
        }
    }
    if(x-min>max-x)
    {
        printf("%d",max);

    }else
    printf("%d",min);
}

