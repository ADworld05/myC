//find the sum of all the elements row and colums wise

#include <stdio.h>

int main(){
 
 int arr[3][3];
 int i,j,colSum,rowSum;

  
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
   printf("arr[%d][%d] :\t",i,j);
   scanf("%d",&arr[i][j]);
  }
 }
 
 printf("the matrix:\n");
  
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
   printf("%d  \t",arr[i][j]);
   }
  printf("\n");
 }
 
 for(i=0;i<3;i++){
  colSum=0;
  for(j=0;j<3;j++){
   colSum=colSum+arr[i][j];
   }
   printf("the sum of column %d is : %d",i,colSum);
  printf("\n");
 }
 
 
 printf("\n");
 
 for(j=0;j<3;j++){
  rowSum=0;
  for(i=0;i<3;i++){
   rowSum=rowSum+arr[i][j];
   }
   printf("the sum of column %d is : %d",j,rowSum);
  printf("\n");
 }
 
 return 0;
 
}