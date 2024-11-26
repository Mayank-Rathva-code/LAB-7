// WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT
#include <stdio.h>
char checkvowel(char x)
{
    char arr[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int check = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == x)
        {
            check = 1;
        }
    }
    return check;
}
int main()
{
    char alpha;
    printf("enter the alphabet:");
    scanf("%c", &alpha);
    int m = checkvowel(alpha);
    // printf("%c",m);
    if (m == 1)
    {
        printf("%c is a vowel", alpha);
    }
    else
    {
        printf("%c is not a vowel", alpha);
    }
    return 0;
}
