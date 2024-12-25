#include <stdio.h>

int main()
{
    int odd[50], even[50];

    int odd_number = 0;
    int even_number = 0;

    int i = 0;

    for (int i = 1; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            even[even_number] = i;
            even_number++;
        }
        else
        {
            odd[odd_number] = i;
            odd_number++;
        }
    }

    int m = sizeof(even) / sizeof(even[0]);
    int n = sizeof(odd) / sizeof(odd[0]);

    printf("The odd numbers are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", odd[i]);
    }

    printf("\n\n");

    printf("The even numbers are: ");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", even[i]);
    }

    return 0;
}