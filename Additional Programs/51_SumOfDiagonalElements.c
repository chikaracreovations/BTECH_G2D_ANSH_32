
#include<stdio.h>
int main(){
int n,i,j,k;
printf("Enter order:\n");
scanf("%d",&n);
int a[n][n],sum=0;

printf("Enter Matrix: \n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);


for(i=0;i<n;i++){
    sum+=a[i][i];
}
printf("Sum of Diagonal elements=%d\n",sum);



return 0;
}
