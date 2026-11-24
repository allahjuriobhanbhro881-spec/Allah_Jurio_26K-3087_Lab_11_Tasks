#include <stdio.h>

int multiply(int a, int b){
    static int sum = 0;
    if(b==0){
        return sum;
    }
    else{
        sum = sum + a;
        return multiply(a,b-1);
    }
}

int main(){

    int res = multiply(5,4);

    printf("%d", res);
    
    return 0;
}