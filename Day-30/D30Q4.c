// WAP  to Develop complete mini project using arrays, strings and functions. 

#include <stdio.h>
#include <string.h>

#define MAX 50

// Function Declarations
void addStudent(int roll[], char name[][50], float marks[], int *count);
void displayStudents(int roll[], char name[][50], float marks[], int count);
void searchStudent(int roll[], char name[][50], float marks[], int count);

int main()
{
    int roll[MAX], count = 0, choice;
    char name[MAX][50];
    float marks[MAX];

    do
    {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent(roll, name, marks, &count);
                break;

            case 2:
                displayStudents(roll, name, marks, count);
                break;

            case 3:
                searchStudent(roll, name, marks, count);
                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}

// Function to Add Student
void addStudent(int roll[], char name[][50], float marks[], int *count)
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[*count]);

    printf("Enter Name: ");
    scanf(" %[^\n]", name[*count]);

    printf("Enter Marks: ");
    scanf("%f", &marks[*count]);

    (*count)++;
    printf("Student Added Successfully!\n");
}

// Function to Display Students
void displayStudents(int roll[], char name[][50], float marks[], int count)
{
    int i;

    if(count == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\nRoll\tName\t\tMarks\n");
    printf("---------------------------------\n");

    for(i = 0; i < count; i++)
    {
        printf("%d\t%-15s%.2f\n", roll[i], name[i], marks[i]);
    }
}

// Function to Search Student
void searchStudent(int roll[], char name[][50], float marks[], int count)
{
    int r, i;

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &r);

    for(i = 0; i < count; i++)
    {
        if(roll[i] == r)
        {
            printf("\nStudent Found!\n");
            printf("Roll No : %d\n", roll[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %.2f\n", marks[i]);
            return;
        }
    }

    printf("Student Not Found!\n");
}