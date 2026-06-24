// WAP to Create contact management system. 

#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int n = 0, choice, i;

    do {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", contacts[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", contacts[n].phone);

                n++;
                printf("Contact Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No contacts available.\n");
                } else {
                    printf("\n--- Contact List ---\n");
                    for(i = 0; i < n; i++) {
                        printf("\nContact %d\n", i + 1);
                        printf("Name  : %s\n", contacts[i].name);
                        printf("Phone : %s\n", contacts[i].phone);
                    }
                }
                break;

            case 3:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}