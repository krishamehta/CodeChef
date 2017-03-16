#include<stdio.h>
#include<string.h>
int main()
{
   int t,len,i;
   char x[100005],y[100005],z[100005];
   scanf("%d",&t);
   while(t--)
   {
   scanf("%s",&x);
   scanf("%s",&y);
   len=strlen(x);
   for(i=0;i<=len-1;i++){
    if(x[i]==y[i]){
        if(x[i]=='B'){
            z[i]='W';
        }
        else
            z[i]='B';
    }
    else
        z[i]='B';
 
   }
   z[i]='\0';
   printf("%s\n",z);
 
   }
   return 0;
 
   } 