// WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI NUmBERS.TEST THE FUNCTION FOR N=5,10,AND 15.
#include <stdio.h>
int fibo(int num)
{
    int x = 0, y = 1, z;
    for (int i = 1; i <= num; i++)
    {
        printf("%d,", x);
        z = x + y;
        x = y;
        y = z;
        //printf("\n");
    }
    
    return x;
}
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    int x = fibo(num);
    printf("%d", x);
    return 0;
}