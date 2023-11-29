//input a 2d matrix and print the matrix

#include <stdio.h>

int main(){
 
 int arr[3][3];
 int i,j,n;
  
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
 return 0;
 
}