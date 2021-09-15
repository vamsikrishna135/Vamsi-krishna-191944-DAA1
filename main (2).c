#include<stdio.h>
int main()
{
  int a=0,b=1,n=150,nexterm,i;
  nexterm=a+b;
  printf("the fibonacci series is %d ,%d ,",a,b);
  for(i=3;i<=n;++i){
   printf("%d, ",nexterm);
   a=b;
   b = nexterm;
   nexterm= a+b;
  }
  return 0;

}