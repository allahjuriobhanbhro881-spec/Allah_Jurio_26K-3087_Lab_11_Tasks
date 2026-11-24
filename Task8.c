#include <stdio.h>

int sum(int n){
   static int s = 0;
   if(n==0){
     return s;
   }
   else{
     s = s+n;
     return sum(n-1);
   }
}

int main(){

    int n;
    scanf("%d", &n);

    int res = sum(n);
    printf("%d", res);

    return 0;
}