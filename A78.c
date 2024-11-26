// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT
#include <stdio.h>
#include <math.h>

int arm(int x)
{
    int count = 0; // digit count
    int no = x;
    while (x > 0)
    {
        int m = x % 10;
        count += 1;
        x /= 10;
    }
    int sum = 0;
    while (no > 0)
    {
        int m = no % 10;
        sum = sum + pow(m, count);
        no /= 10;
    }
    return sum;
}
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    int i = num;
    int y = arm(num);
    printf("%d\n", y);
    if (i == y)
    {
        printf("%d is an armstrong number", num);
    }
    else
    {
        printf("%d is not an armstrong number", num);
    }
    return 0;
}