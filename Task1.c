#include <stdio.h>

struct Patient
{
    int patientID;
    char name[20];
    int age;
    float fee;
}p1;


int main(){

    printf("Enter patient id: ");
    scanf("%d", &p1.patientID);
    
    printf("Enter name: ");
    scanf("%s", p1.name);

    printf("Enter patient age: ");
    scanf("%d", &p1.age);

    printf("Enter cunsultancy fee: ");
    scanf("%f", &p1.fee);

    printf("ID: %d\n", p1.patientID);
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Fee: %f\n", p1.fee);


    return 0;
}