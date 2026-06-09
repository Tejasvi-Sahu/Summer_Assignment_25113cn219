// WAP to Write function for Armstrong.

#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;
    while (exp--)
        result *= base;
    return result;
}

int isArmstrong(int num)
{
    int original = num;
    int digits = 0, sum = 0, rem;
    int temp = num;

    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;

    while (temp > 0)
    {
        rem = temp % 10;
        sum += power(rem, digits);
        temp /= 10;
    }

    return sum == original;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is Armstrong Number.",n);
    else
        printf("%d is not an Armstrong Number.",n);

    return 0;
}