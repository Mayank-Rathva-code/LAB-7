// WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION
/*#include <stdio.h>
#include <string.h>
void read_book(char x[])
{
    char z[100];
    for (int i = 0; i < 100; i++)
    { // scanf("%[^\n]s",x);
        //puts(x);
        printf("\nenter the lover of divya:");
        scanf("%[^\n]s",z);
        if(z=="DHWANI PATEL")
        {
            printf("DIVYA LOVES DHWANI");
            break;
        }
    }
}
int main()
{

    char str[1000];
    printf("enter the book sentences;\n");
    scanf("%[^\n]s", str);
    read_book(str);
}*/

// WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION USING POINTER TO STRUCTURE.
#include <stdio.h>
#include <string.h>
typedef struct book
{
    char name[100];
    char author[50];
    int price;
    int pages;

} book;

void read_and_display(book *p)
{
    printf("Enter name of book=");
    scanf("%s", p->name);
    printf("Name of book=%s\n", p->name);

    printf("Enter name of author=");
    scanf("%s", p->author);
    printf("Author=%s\n", p->author);

    printf("Enter number of page=");
    scanf("%d", &p->pages);
    printf("Number of page=%d\n", p->pages);

    printf("Enter price=");
    scanf("%d", &p->price);
    printf("price=%d\n", p->price);
}

int main()
{
    book info;
    read_and_display(&info);
}
