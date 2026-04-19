#include <stdio.h>
int main(){
int a,b; char op;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
printf("Enter operator: ");
scanf(" %c",&op);
if(op=='+') printf("%d\n",a+b);
else if(op=='-') printf("%d\n",a-b);
else if(op=='*') printf("%d\n",a*b);
else if(op=='/') printf("%d\n",a/b);
return 0;
}