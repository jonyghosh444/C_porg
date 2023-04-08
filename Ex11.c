// Check Palindrome in C Language
// Enter a number to check whether it is a palindrome or not
#include <stdio.h>
int isPalindrome(int num)
{
    int reverse, reminder, number;
    number = num;
    reverse = 0;
    while (num != 0)
    {
        reminder = num % 10;
        reverse = reverse * 10 + reminder;
        num /= 10;
    }
    if (number != reverse)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int number;
    printf("Enter a number to check whether it is a palindrome or not.\n");
    scanf("%d", &number);

    if (isPalindrome(number) == 1)
    {
        printf("This number is a palindrome.\n");
    }
    else
    {
        printf("This number is not a palindrome.\n");
    }

    return 0;
}