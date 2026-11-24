#include <stdio.h>

void evenFinder(int arr[],int size){

    if(size == 0){
        return;
    }
    else{
       if(arr[10-size]%2==0){
         printf("%d ", arr[10-size]);
       }
       evenFinder(arr,size-1);
    }
     
}

int main(){

    int arr[10];

    for(int i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }

    evenFinder(arr,10);
    
    return 0;
}