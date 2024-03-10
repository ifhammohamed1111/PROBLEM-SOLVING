#include <stdio.h>

int reverseNumber(int num)
{
    int rev_num = 0, remainder;

    while (num != 0)
    {
        remainder = num % 10;
        rev_num = rev_num * 10 + remainder;
        num = num / 10;
    }
    return rev_num;
}

int main()
{
    int Num;

    printf("Enter the number to reverse: ");
    scanf("%d", &Num);

    int ReverseNum = reverseNumber(Num);

    if (Num == ReverseNum)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}