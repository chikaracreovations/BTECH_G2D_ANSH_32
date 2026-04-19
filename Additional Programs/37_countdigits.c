#include <stdio.h>
int main(){
int n,c=0;
printf("Enter number: ");
scanf("%d",&n);
while(n>0){
  c++; n/=10;}
printf("Digits: %d\n",c);
return 0;
}