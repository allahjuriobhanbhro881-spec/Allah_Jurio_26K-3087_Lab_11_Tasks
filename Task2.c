#include <stdio.h>

struct  Room
{

    int arr[4];

}r1;


int main(){

    for(int i=0;i<4;i++){
        scanf("%d", &r1.arr[i]);
    }

    printf("\n");

    for(int i=0;i<4;i++){
        printf("%d\n", r1.arr[i]);
    }

  

    return 0;
}