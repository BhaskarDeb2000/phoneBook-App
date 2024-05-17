#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct phoneBook
{
    char name[30];
    char num[20];
    char mail[50];
} person1, person2;

void inputName(char name[30])
{
    printf("Enter name: ");
    fgets(name, 30, stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove newline character if present
}

void inputNum(char num[20])
{
    printf("Enter Your Contact Number with Country code: ");
    scanf("%19s", num);
    getchar();
}

void inputMail(char mail[50])
{
    printf("Enter your Email Address: ");
    scanf("%49s", mail);
    getchar();
}

int main()
{
    printf("Hello! Welcome to PhoneBook App.\n\n");

    // Person1 input
    inputName(person1.name);
    inputNum(person1.num);
    inputMail(person1.mail);

    // Ask if user wants to register another contact
    char secondReg;
    printf("Do you want to register another contact? (y/n): ");
    scanf(" %c", &secondReg); // Space before %c to consume any whitespace
    getchar();

    if (secondReg == 'y')
    {
        printf("Second person Registration:\n\n");
        inputName(person2.name);
        inputNum(person2.num);
        inputMail(person2.mail);
    }

    // Ask if user wants to see the registered information
    char confirm;
    printf("You have Successfully Registered yourself. Want to see how it turned out? (y/n): ");
    scanf(" %c", &confirm); // Space before %c to consume any whitespace
    getchar();

    if (confirm == 'y')
    {
        printf("\n\nPhoneBook Person Details:\n");
        printf("Person 1:\n");
        printf("Name: %s\n", person1.name);
        printf("Contact Number: %s\n", person1.num);
        printf("Email Address: %s\n", person1.mail);

        if (secondReg == 'y')
        {
            printf("\nPerson 2:\n");
            printf("Name: %s\n", person2.name);
            printf("Contact Number: %s\n", person2.num);
            printf("Email Address: %s\n", person2.mail);
        }
    }
    else
    {
        exit(0);
    }

    return 0;
}
