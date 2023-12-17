//transpose of a matrix

#include <stdio.h>

int main(){
 
 int i,j;
 int row,col;
 printf("enter rows :\t",row);
 scanf("%d",&row);
 
 printf("enter columns :\t",col);
 scanf("%d",&col);
 
 int arr[row][col];
   
 for(i=0;i<row;i++){
  for(j=0;j<col;j++){
   printf("arr[%d][%d] :\t",i,j);
   scanf("%d",&arr[i][j]);
  }
 }
 
 printf("the matrix :\n");
  
 for(i=0;i<row;i++){
  for(j=0;j<col;j++){
   printf("%d  \t",arr[i][j]);
   }
  printf("\n");
 }
 
 printf("\n\n");
 
 printf("the tranpose matrix :\n");
 
 for(i=0;i<col;i++){
  for(j=0;j<row;j++){
   printf("%d  \t",arr[j][i]);
   }
  printf("\n");
 }
 
 
 return 0;
 
}