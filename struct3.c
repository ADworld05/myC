#include <stdio.h.>

typedef struct date
{
    int day,month,year;
}date;

int compareDate(date d1,date d2){
    if (d1.year<d2.year)
        printf("%d/%d/%d is earlier\n",d1.day,d1.month,d1.year); 
    if (d1.year>d2.year)
        printf("%d/%d/%d is earlier\n",d2.day,d2.month,d2.year);
    if (d1.month<d2.month)
        printf("%d/%d/%d is earlier\n",d1.day,d1.month,d1.year); 
    if (d1.month>d2.month)
        printf("%d/%d/%d is earlier\n",d2.day,d2.month,d2.year);
    if (d1.day<d2.day)
        printf("%d/%d/%d is earlier\n",d1.day,d1.month,d1.year);
    if (d1.day>d2.day)
        printf("%d/%d/%d is earlier\n",d2.day,d2.month,d2.year); 
    else 
        printf("date is same");
}


int main(){
   
    date D1={4,7,2000};
    date D2={26,11,2000};

    compareDate(D1,D2);
}