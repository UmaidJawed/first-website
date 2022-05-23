#include <stdio.h>
int main()
{
  int a, b, c, d, e;
  float tm, avg, per;
  printf("Enter your marks for the respective subjects\n");
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

  tm = a + b + c + d + e;
  printf("Total marks is : %f\n", tm);

  avg = (a + b + c + d + e) / 5;
  printf("Average of the marks is : %f\n", avg);

  per = (tm / 500) * 100;
  printf("Percentage of the total marks is : %f\n", per);

  return 0;
}