#include<stdio.h>
int main(){
int eng,math,phy,cs,chem,sum;
float per;
printf("Enter marks of 5 subjects:\n");
scanf("%d%d%d%d%d",&eng,&math,&chem,&cs,&phy);
sum=eng+math+chem+phy+cs;
per=sum/5.0;
if(per>=90) printf("Grade A\n");
else if(per>=80) printf("Grade B\n");
else if(per>=60) printf("Grade C\n");
else printf("Grade D\n");
return 0;
}