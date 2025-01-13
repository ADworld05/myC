//if else age check 

#include <stdio.h>

int main()
{
    int age,marks;
    
    scanf("Please Enter your age: %d", &age);
    scanf("Please Enter your marks: %d", &marks);
    
    if (age<18)   
    {printf("You're a minor");
    }
    
    else if (age==18)   
    {printf("You're age is 18 congratulations");
    }
    
    else if (age>18 )
    {
        printf("you're age is greater than 18");
        if (marks<33)
        {
            printf("you have not cleared the cut off");
        }
        else if (marks<60)
        {
            printf("You're marks is less than 60");
        }
                else if (marks<90)
        {
            printf("You're marks is less than 90");
        }
                else
        {
            printf("you're marks is greater than 90, congratulations");
        }
                    return 0;
        }

