/*Revison-1,Question-4
To swap the values of 2 variables using another variables*/
#include<stdio.h>
int main(){
 int a,b,temp;
printf("Enter the value\n");
 scanf("%d %d",&a,&b);

temp = a;
a = b;
b = temp;
printf("Reverse number",a,b);

return 0;}