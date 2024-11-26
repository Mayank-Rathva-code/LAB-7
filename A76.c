// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD.
#include <stdio.h>
int fun(int num)
{
    if (num % 2 != 0)
    {
        printf("%d is odd number", num);
    }
    else
    {
        printf("%d is even number", num);
    }
    return num;
}
int main()
{
    int n;
    printf("\nenter the number:");
    scanf("%d", &n);
    fun(n); //FUNCTION CALL
    return 0;
}