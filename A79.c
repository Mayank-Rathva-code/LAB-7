// WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY X AND Y
#include <stdio.h>
void swap(int num1,int num2)
{
    /*x = x + y; // 3+5=8
    y = x - y; // 8-5=3
    x = x - y; // 8-3=5*/
    int temp=num1;
    num1=num2;
    num2=temp;
    printf("\nnum1 is %d",num1);
    printf("\nnum2 is %d",num2);
    return ;
}
int main()
{
    int num1, num2;
    printf("enter first number ");
    scanf("%d", &num1);
    printf("enter second number ");
    scanf("%d", &num2);
    swap(num1, num2);
    
   /* printf("\nnum1 is %d",num1);
    printf("\nnum2 is %d",num2);*/
}
