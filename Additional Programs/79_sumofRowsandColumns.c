
#include<stdio.h>
int main(){
int n,i,j,k;
printf("Enter order:\n");
scanf("%d",&n);
int a[n][n],sumrow=0,sumcol=0;

printf("Enter Matrix: \n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);


for(i=0;i<n;i++){
    sumrow=0;
    for(j=0;j<n;j++)
    sumrow+=a[i][j];

printf("Sum of ROW %d=%d\n",i,sumrow);
}

printf("\n");

for(i=0;i<n;i++){
    sumcol=0;
    for(j=0;j<n;j++)
    sumcol+=a[j][i];

printf("Sum of COL %d=%d\n",i,sumcol);
}

return 0;
}
