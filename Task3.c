#include <stdio.h>

struct Customer
{
    int id;
    char name[50];
    int units;
    int perUnit;

   
}c1;

 
void calculateBill(int units,int perUnit){
        int bill = units*perUnit;
        printf("%d", bill);
}




int main(){

    printf("Enter units: ");
    scanf("%d", &c1.units);

    printf("Enter perUnits Consumed: ");
    scanf("%d", &c1.perUnit);

    calculateBill(c1.units,c1.perUnit);

    return 0;
}