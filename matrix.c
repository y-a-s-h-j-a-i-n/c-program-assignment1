#include<stdio.h>
void main(){
int row1,column1;
printf("enter 1st arry row and coloumn:");
scanf("%d",&row1);
scanf("%d",&column1);
int array1[row1][column1];
for(int i=0;i<row1;i++){
for(int j=0;j<column1;j++){
scanf("%d",&array1[i][j]);
}
}
int row2,column2;
printf("enter 2nd array row and column:");
scanf("%d",&row2);
scanf("%d",&column2);
int array2[row2][column2];
for(int i=0;i<row2;i++){
for(int j=0;j<column2;j++){
scanf("%d",&array2[i][j]);
}
}
if(column1==row2){
int array3[row1][column2];
int temp=0,k;
for(int i=0;i<row1;i++){
for(int j=0;j<column2;j++){
for(int k=0;k<column1;k++){
temp+=array1[i][k]*array2[k][j];
}
array3[i][j]=temp;
temp=0;
}
}
for(int i=0;i<row1;i++){
for(int j=0;j<column2;j++){
printf("%d ",array3[i][j]);
}
printf("\n");
}
}
else{
printf("wrong matrix");
}
}
