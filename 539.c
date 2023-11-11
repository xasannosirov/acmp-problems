#include<stdio.h>
 
int main(){
 
    int a;
    scanf("%d", &a);
 
    if(a % 2 == 0 && a > 0){
        printf("%d", a/2);
    }
    else if(a == 0){
        printf("%d", 0);
    }
    else if (a % 2 != 0 && a > 1){
        printf("%d", a);
    }
    else if (a % 2 != 0 && a == 1){
        printf("%d", 0);
    }
 
    return 0;
}
