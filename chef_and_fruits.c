#include <stdio.h>
#include <stdlib.h>
int main()
{
 
 int t,m,n,k,diff;
 scanf("%d",&t);
 
while(t--){
    scanf("%d %d %d",&m,&n,&k);
    diff=n>m?(n-m-k):(m-n-k);
    diff=diff<=0?0:diff;
    printf("%d\n",diff);
 
}
return 0;
 
}
 