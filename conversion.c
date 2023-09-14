/*to convert units
 kms - miles
 celcius - fahrenheit
 kgs - pound*/

#include <stdio.h>

int main()
{

    int choice, choice1, choice2, choice3; // for user choices for each separate
    int kms, miles, cel, farh, pnd, kgs;   // all separate variables for each

    while (choice != 4)
    {
        printf("Enter choice\n\t1: kilometers-miles\n\t2: celcius-fahrenheit\n\t3: pound-kgs\n\t4: quit\n"); // check input
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:                           // kms to miles
            printf("1: kms\n2: miles\n"); // check whether input miles or kms
            scanf("%d", &choice1);
            if (choice1 == 1)
            {
                printf("Enter Kms :\n");
                scanf("%d", &kms);
                printf("%d kilometers = %f miles\n\n", kms, (kms * 0.621371)); // 1kms = 0.6..mile
            }                                                                  // %f after calculation

            else if (choice1 == 2)
            {
                printf("Enter Miles :\n");
                scanf("%d", &miles);
                printf("%d miles = %f kilometers\n\n", miles, (miles * 1.60934)); // 1mile =1.6..kms
            }
            break;

        case 2: // celcius to fahrenheit
            printf("1: celcius\n2: fahrenheit\n");
            scanf("%d", &choice2);
            if (choice2 == 1)
            { // if input=celcius
                printf("Enter celcius :\n");
                scanf("%d", &cel);
                printf("%d celcius= %f fahrenheit\n\n", cel, (cel * 1.8) + 32); // (9C/5)+32=F @var =C
            }

            else if (choice2 == 2)
            {
                printf("Enter fahrenheit :\n");
                scanf("%d", &farh);
                printf("%d fahrenheit = %f celcius\n\n", farh, ((farh - 32) * 0.5555)); // (F-32)5/9=C @var =F
            }
            break;

        case 3: // pound to kgs
            printf("1: pound\n2: kgs\n");
            scanf("%d", &choice3);
            if (choice3 == 1)
            {
                printf("Enter pounds :\n");
                scanf("%d", &pnd);
                printf("%d pound = %f kgs\n\n", pnd, (pnd * 0.453592)); // 1pound = 0.4..kgs
            }                                                           // %f after calculation

            else if (choice3 == 2)
            {
                printf("Enter kgs :\n");
                scanf("%d", &kgs);
                printf("%d kgs = %f pound\n\n", kgs, kgs * 2.20462); // 1kg = 2.2..pounds
            }
            break;
        }
    }
}