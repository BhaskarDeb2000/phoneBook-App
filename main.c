#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

struct phoneBook
{
    char name[25];
    int number;
    char mail[20];
} person1;
void mail(char b[20])
{
    printf("Please Enter your email:");
    fgets(b, 20, stdin);
}
int main()
{
    // Person1 input
    char a[25], b[20];
    int p;
    printf("Hello! Welcome to PhoneBook App. \n\nPlease Enter your name:");
    fgets(a, 25, stdin);
    strcpy(person1.name, a);
    printf("Hello %sPlease Enter your phone number:", a);
    scanf("%d", &p);
    person1.number = p;
    sleep(2);
    mail(b);
    strcpy(person1.mail, b);
    printf("Your name is %sYour contact Number is: %d.\nYour email address is: %s\n", person1.name, person1.number, person1.mail);

    return 0;
}