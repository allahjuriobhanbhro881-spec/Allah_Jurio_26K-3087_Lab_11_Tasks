#include <stdio.h>

struct Vehicle{
    int rNo;
    char model[20];
    int manYear;
    int *tyreSize;

    struct Owner o1;
       
};

 struct Owner
    {
      int ownerID;
      char ownerName[50];
      int contNo;

    };




int main(){

    
    struct Vehicle v;
    struct Vehicle *ptr;


    printf("Enter Registration Number: ");
    scanf(" %[^\n]", v.rNo);

    printf("Enter Vehicle Model: ");
    scanf(" %[^\n]", v.model);

    printf("Enter Manufacturing Year: ");
    scanf("%d", &v.manYear);

  
    printf("\nEnter Owner ID: ");
    scanf("%d", &v.o1.ownerID);

    printf("Enter Owner Name: ");
    scanf(" %[^\n]", v.o1.ownerName);

    printf("Enter Contact Number: ");
    scanf(" %[^\n]", v.o1.contNo);

    ptr = &v;

    printf("\n VEHICLE DETAILS \n");

    printf("Registration Number: %s\n", ptr->rNo);
    printf("Vehicle Model: %s\n", ptr->model);
    printf("Manufacturing Year: %d\n", ptr->manYear);

    
    printf("\nOWNER DETAILS \n");

    printf("Owner ID: %d\n", ptr->o1.ownerID);
    printf("Owner Name: %s\n", ptr->o1.ownerName);
    printf("Contact Number: %s\n", ptr->o1.contNo);
    
    return 0;
}