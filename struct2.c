#include <stdio.h>

struct vector
{
    int vx;
    int vy;
};

void addVector(struct vector va,struct vector vb){
    int x,y;
    
    x=va.vx+vb.vx;
    y=va.vy+vb.vy;

    printf("X component %d\n",x);
    printf("Y component %d",y);
}  


int main(){
    struct vector v1,v2;

    printf("X component of v1 :");
    scanf("%d",&v1.vx);
    printf("Y component of v1 :");
    scanf("%d",&v1.vy);

    printf("X component of v2 :");
    scanf("%d",&v2.vx);
    printf("Y component of v2 :");
    scanf("%d",&v2.vy);

    addVector(v1,v2);


}