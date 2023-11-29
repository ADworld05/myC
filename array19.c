//addition and substraction of 2 matrix

#include <stdio.h>
int main(){

 int i,j;
 int row,col;
 printf("enter rows :\t",row);
 scanf("%d",&row);
 
 printf("enter columns :\t",col);
 scanf("%d",&col);
 
 int arr1[row][col];
 int arr2[row][col];
 int arr3[row][col];
 int arr4[row][col]; 
 
 //take arr1 input  
 for(i=0;i<row;i++){
  for(j=0;j<col;j++){
   printf("arr1[%d][%d] :\t",i,j);
   scanf("%d",&arr1[i][j]);
  }
 }
 printf("\n");
 
 //take arr2 input
 for(i=0;i<row;i++){
  for(j=0;j<col;j++){
   printf("arr[%d][%d] :\t",i,j);
   scanf("%d",&arr2[i][j]);
  }
 }
 
 //for adding arr1 and arr2
 for(i=0;i<row;i++){
  for(j=0;j<col;j++){
   arr3[i][j]=arr1[i][j]+arr2[i][j];
   }
 }
 printf("\n"); 
 
 //printing added matrix
 printf("adding both matrices :\n");  
 for(i=0;i<row;i++){
  for(j=0;j<col;j++){
   printf("%d  \t",arr3[i][j]);
   }
  printf("\n");  
 }  
  
 //for substracting arr1 and arr2
 for(i=0;i<row;i++){
  for(j=0;j<col;j++){
   arr4[i][j]=arr1[i][j]-arr2[i][j];
   }
 }
 printf("\n"); 
 
 //printing substracted matrix
 printf("substracting both matrices :\n");  
 for(i=0;i<row;i++){
  for(j=0;j<col;j++){
   printf("%d  \t",arr4[i][j]);
   }
  printf("\n");
 }
 
 return 0; 
}
