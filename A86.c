// WRITE A FUNCTION TO RADE LINE OF TEXT AND FIND OUT LENGTH OF STRING
/*#include <stdio.h>
int length_string(char str[])
{
    int lenght = 0, i = 0;
    while (str[i] != '\0')
    {
        lenght = lenght + 1;
        i = i + 1;
    }
    return lenght;
}

int main()
{
    char str[60];
    printf("enter the string:");
    scanf("%[^\n]s", str);
    printf("lenght of the string is %d", length_string(str));
    printf("\nAnd size of string is %d",length_string(str)+1);
    return 0;
}*/
#include<stdio.h>
#include<string.h>
int l_string(char x[])
{
   return (strlen(x));
}
int main()
{
    char str[60];
    printf("enter the string:");
    scanf("%[^\n]s", str);
    printf("lenght of the string is %d", l_string(str));
    //printf("\nAnd size of string is %d",l_string(str)+1);
    return 0;
}