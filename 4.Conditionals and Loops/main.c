#include <stdio.h>

int main()
{
    // Input the positive integer
    int n;
    scanf("%d", &n);

    // Check the conditions and print the corresponding output
    if (1 <= n && n <= 9)
    {
        // If the integer is between 1 and 9 (inclusive)
        switch (n)
        {
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        case 4:
            printf("four\n");
            break;
        case 5:
            printf("five\n");
            break;
        case 6:
            printf("six\n");
            break;
        case 7:
            printf("seven\n");
            break;
        case 8:
            printf("eight\n");
            break;
        case 9:
            printf("nine\n");
            break;
        }
    }
    else
    {
        // If the integer is greater than 9
        printf("Greater than 9\n");
    }

    return 0;
}
