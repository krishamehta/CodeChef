#include <stdio.h>
int main() {
  int a, b, n1,n2, t, gcd, lcm;
  scanf("%d",&t);
 while(t--)
 {
  scanf("%d %d", &n1, &n2);
a=n1;
b=n2;
 while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
 
  gcd = n1;
  lcm = (a*b)/gcd;
 
  printf("%d %d", gcd,lcm);
  printf("\n");
 
}
} 