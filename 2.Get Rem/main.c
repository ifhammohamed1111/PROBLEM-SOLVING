#include <stdio.h>

int main()
{
    int num, bit, rem, zero = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter how many last bits you want to see: ");
    scanf("%d", &bit);

    for (int i = 0; i < bit; i++)
    {
        zero *= 10;
    }

    rem = num % zero;

    // if (rem == 0)
    // {
    //     printf("Last %d character of the number : ", bit);

    //     for (int j = 0; j < bit; j++)
    //     {
    //         printf("0");
    //     }
    // }
    // else
    // {
    printf("Last %d character of the number %0*d", bit, bit, rem);
    // }

    return 0;
}
