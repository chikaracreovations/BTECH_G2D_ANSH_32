#include<stdio.h>
int main(){
int n,i,j,min,max;
printf("Enter order:\n");
scanf("%d",&n);
int a[n][n],sum=0,freq=0,key;

printf("Enter Matrix: \n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);

min=a[0][0];max=a[0][0];

for(i=0;i<n;i++){
    for(j=0;j<n;j++){
       if(a[i][j]<min) min=a[i][j];
       if(a[i][j]>max) max=a[i][j];
    }
}
printf("The Minimum element of matrix = %d\n",min); 
printf("The Maximum element of matrix = %d\n",max);
 
return 0;       
}
