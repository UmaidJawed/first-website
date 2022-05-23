/*Revision-1, Question-2
To find : The simple and compund interest
By - Umaid Jawed*/
#include<stdio.h>
#include<math.h>
 int main(){
     int p,r,t;
     float si;
     double ci,pr=10,ra=1000,ti=2;
     printf("Enter the value of p,r,and t\n");
      scanf("%d %d %d",&p,&r,&t);
    
    si = (p*r*t)/100;
    printf("The simple interest is : %f\n",si);

    ci = pr*(pow(1+ra/100,ti));
    printf("The compund interest is : %f\n",ci);
   
   return 0; 
 }