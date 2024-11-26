// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.

#include <stdio.h> //HEADER FILE
int pal(int num)
{
    int rev = 0;
    while (num != 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    return rev;
}
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    int i = num;
    int rev = pal(num);
    printf("reverse of number is %d", rev);
    if (i == rev)
    {
        printf("\n%d is pallindrome number",i);
    }
    else
    {
        printf("\n%d is not a pallindrome number",i);
    }
    return 0;
}
