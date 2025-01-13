#include <stdio.h>
#include <stdlib.h>

typedef struct driverDetails 
{
    char name[20];
    char licNo[20];
    char route[20];
    int kms;
}driver;


void displayDetails(driver d1){
    printf("Name of driver :\n%s\n",d1.name);
    printf("Licence number of the driver :\n%s\n",d1.licNo);
    printf("Route :\n%s\n",d1.route);
    printf("Driving experience : \n%d\n kilometers");
    printf("\n\n");
}

int main(){
    driver d1,d2,d3;

    //details of driver d1
    printf("Enter the name of driver :\t");
    scanf("%s",d1.name);
    printf("Enter the licence number of driver :\t");
    scanf("%s",d1.licNo);
    printf("Enter route of driver :\t");
    scanf("%s",d1.route);
    printf("kilmeters driven :\t");
    scanf("%d",&d1.kms);   

    //details of driver d2       
    printf("Enter the name of driver :\t");
    scanf("%s",d2.name);    
    printf("Enter the licence number of driver :\t");
    scanf("%s",d2.licNo);
    printf("Enter route of driver :\t");
    scanf("%s",d2.route);
    printf("kilmeters driven :\t");
    scanf("%d",&d2.kms);
    
    //details of driver d3
    printf("Enter the name of driver :\t");
    scanf("%s",d3.name);
    printf("Enter the licence number of driver :\t");
    scanf("%s",d3.licNo);  
    printf("Enter route of driver :\t");
    scanf("%s",d3.route);  
    printf("kilmeters driven :\t");
    scanf("%d",&d3.kms);


    displayDetails(d1);
    displayDetails(d2);
    displayDetails(d3);

    return 0;

}
