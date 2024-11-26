// WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS.  NCR = (!N/(!R*!(N-R)))
#include <stdio.h>
int ncr(int x, int y)
{
    int xfact = 1, yfact = 1, xyfact = 1;
    for (int i = 1; i <= x; i++)
    {
        xfact *= i;
    }
    for (int i = 1; i <= y; i++)
    {
        yfact *= i;
    }
    for (int i = 1; i <= x - y; i++)
    {
        xyfact *= i;
    }
    int NcR = xfact / (yfact * xyfact);
    return NcR;
}
int main()
{
    int n, r;
    printf("enter the number(n):");
    scanf("%d", &n);
    printf("enter the number(r):");
    scanf("%d", &r);
    int m = ncr(n, r);
    printf("NCR=%d", m);
}
