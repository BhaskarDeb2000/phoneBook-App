#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

struct phoneBook
{
    char name[25];
    char num[20];
    char mail[50];
} person1, person2;
void inputName(char name[25])
{
    printf("Enter name: ");
    fgets(name, 25, stdin);
}
void inputNum(char num[25])
{
    printf("Enter Your Contact Number with Country code: ");
    scanf("%s", num);
    getchar();
}
void inputmail(char mail[50])
{
    printf("Enter your Email Address: ");
    scanf("%s", mail);
}
int main()
{
    // Person1 input
    char a[25], b[20];
    char p[50];
    printf("Hello! Welcome to PhoneBook App.\n\n");
    inputName(a);
    strcpy(person1.name, a);

    inputNum(b);
    strcpy(person1.num, b);

    inputmail(p);
    strcpy(person1.mail, p);

    // Person2 Input
    char secondReg;
    printf("Do you want to register another contact? (y/n): ");
    scanf("%s", &secondReg);
    getchar();
    if (secondReg == 'y')
    {

        char c[25], d[20];
        char q[50];
        printf("Second person Registration:\n\n");

        inputName(c);
        strcpy(person2.name, c);

        inputNum(d);

        strcpy(person2.num, d);

        inputmail(q);
        strcpy(person2.mail, q);
    }
    char confirm;
    printf("You have Successfully Registered yourself. Want to see how it turned out? (y/n):");
    scanf("%s", &confirm);
    getchar();
    if (confirm == 'y')
    {
        printf("\n\nPhoneBook Person Details:\nName: %sContact Number: %s\nEmail Address: %s\n", person1.name, person1.num, person1.mail);
        if (secondReg == 'y')
        {
            printf("\n\nName: %sContact Number: %s\nEmail Address: %s\n", person2.name, person2.num, person2.mail);
        }
    }
    else
    {
        exit(0);
    }

    return 0;
}