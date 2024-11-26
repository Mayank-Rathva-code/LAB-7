// WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN ZERO OTHERWISE.
#include <stdio.h>
int checkprime(int x)
{
    int check = 1;
    if (x == 0 || x == 1) // 0 and 1 are not a prime number
    {
        printf("not prime number");
    }
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0) // if remainder is 0 then it is not prime number
        {
            check = 0;
            break;
        }
    }
    return check;
}
int main()
{
    int num;
    printf("enter the number you want to check:");
    scanf("%d", &num);
    int m = checkprime(num);
    if (m == 1)
    {
        printf("\nRETURN=%d\n%d is prime number",m,num);
    }
    else
    {
        printf("\nRETURN= %d\n%d is not prime number", m,num);
    }
    return 0;
}