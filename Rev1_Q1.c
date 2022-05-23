#include<stdio.h>
  int main(){
      int a,b,c;
      printf("enter the a\n");
      scanf("%d",&a);
      printf("enter b\n");
      scanf("%d",&b);

      c=a+b;
      printf("\n%d\n",c);
      c=a-b;
      printf("%d\n",c);
      c=a/b;
      printf("%d\n",c);
      c=a*b;
      printf("%d\n",c);
      c=a%b;
      printf("%d\n",c);
    return 0;
  }