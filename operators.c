
#include <stdio.h>
 
int main()
{
   int t,a,b;
   scanf("%d",&t);
   while(t--){
    scanf("%d %d",&a, &b);
    if(a>b)
        printf(">\n");
    else if (b>a)
        printf("<\n");
    else
        printf("=\n");
 
 
   }
return 0;
} 