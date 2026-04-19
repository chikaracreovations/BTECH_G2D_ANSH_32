#include<stdio.h>
#include<math.h>
int main(){
float p,r,t,si,ci,amt;
printf("Enter principal rate and time:\n");
scanf("%f%f%f",&p,&r,&t);
si=(p*r*t)/100;
amt=p*pow((1+r/100),t);
ci=amt-p;
printf("Simple interest is: %f\n",si);
printf("Compound interest is: %f\n",ci);
return 0;
}