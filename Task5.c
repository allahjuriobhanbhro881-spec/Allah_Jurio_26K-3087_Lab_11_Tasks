#include <stdio.h>

struct Department
{
    int depID;
    char depName[20];
    int nEnrolled;

    struct Head
    {
        int empID;
        char empName[20];
        char design[20];
    }h1;
    

};





int main(){
     struct Department d;


    printf("Enter Department ID: ");
    scanf("%d", &d.depID);

    printf("Enter Department Name: ");
    scanf(" %[^\n]", d.depName);

    printf("Enter Number of Enrolled Students: ");
    scanf("%d", &d.nEnrolled);

    // Input department head details
    printf("\nEnter Head Employee ID: ");
    scanf("%d", &d.h1.empID);

    printf("Enter Head Name: ");
    scanf(" %[^\n]", d.h1.empName);

    printf("Enter Designation: ");
    scanf(" %[^\n]", d.h1.design);

    // Display information
    printf("\n Department Information \n");

    printf("Department ID: %d\n", d.depID);
    printf("Department Name: %s\n", d.depName);
    printf("Enrolled Students: %d\n", d.nEnrolled);

    printf("\n===== Department Head Information =====\n");

    printf("Employee ID: %d\n", d.h1.empID);
    printf("Head Name: %s\n", d.h1.empName);
    printf("Designation: %s\n", d.h1.design);

  
    return 0;
}