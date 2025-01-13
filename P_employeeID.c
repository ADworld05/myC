#include <stdio.h>
#include <stdlib.h>

void getDetails(){
    
    int n;
    char *p;    
    printf("Enter the length of you ID :\n");
    scanf("%d",&n);
    p=(char *)malloc((n+1)*sizeof(char));
    printf("Enter the id :");
    scanf("%s",p);
    printf("%s\n",p);       
}

int main(){
    printf("Employee 1:\n");
    getDetails();
    printf("Employee 2\n");
    getDetails();
    printf("Employee 3\n");
    getDetails();
}