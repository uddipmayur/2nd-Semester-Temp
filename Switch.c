//Write a C program to implement switch

#include <stdio.h>

int main()
{
    int n;

    while (n != -100)
    {
        printf("Enter a number:");
        scanf("%d", &n);

        switch (n)
        {
            case 1:
                printf("Monday\n");
                break;

            case 2:
                printf("Tuesday\n");
                break;

            case 3:
                printf("wednesday\n");
                break;

            case 4:
                printf("Thursday\n");
                break;

            case 5:
                printf("Friday\n");
                break;

            case 6:
                printf("Saturday\n");
                break;

            case 7:
                printf("Sunday\n");
                break;

            case -100:
                printf("Exiting the program.");
                break;

            default:
                printf("Invalid Input\n");
                break;
        }
    }
    return 0;
}