
#include<stdio.h>
 
 
 
int main()
 
{
 
    int x;
 
    float y,k=0.0;
 
    scanf("%d",&x);
 
        scanf("%f",&y);
 
 
 
    if(x%5==0)
 
    {
 
        if(y-0.50>x)
 
        {
 
            k=y-x-0.50;
 
            printf("%0.2f",k);
 
        }
 
        else 
        {
 
            printf("%0.2f",y);
 
        }
 
       
    }
 
    else
 
    {
 
        printf("%0.2f",y);
 
    }
 
    return 0;
 
}