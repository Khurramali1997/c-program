#include<stdio.h>
int main()
{
    enum months{
        JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC
    };
    int numberOfMonth;
    printf("Enter the number of month = ");
    scanf("%d",&numberOfMonth);
    switch(numberOfMonth)
    {
        case JAN:
        printf("January");
        break;
        case FEB:
        printf("Feburary");
        break;
        case MAR:
        printf("March");
        break;
        case APR:
        printf("April");
        break;
        case MAY:
        printf("May");
        break;
        case JUN:
        printf("June");
        break;
        case JUL:
        printf("July");
        break;
        case AUG:
        printf("August");
        break;
        case SEP:
        printf("September");
        break;
        case OCT:
        printf("Octuber");
        break;
        case NOV:
        printf("November");
        break;
        case DEC:
        printf("December");
        break;
        default:
        printf("There are only 12 months in a year");
        break;
        }

        return 0;
}
