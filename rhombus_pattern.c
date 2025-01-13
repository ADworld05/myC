#include <stdio.h>

void main(){
const int i = 5;
int j;
int k;

for(int i=0 ; i < 5 ; i++){
    for (j =i ; j < 6; j++){
        printf(" ");

    }
    printf(" * * * * * ");
    
    printf("\n");
}

for(int i=0 ; i < 5 ; i++){
    for (j =6-i ; j < 6; j++){
        printf(" ");

    }
    printf(" * * * * * ");
    
    printf("\n");
}



}