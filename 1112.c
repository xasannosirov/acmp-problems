#include<stdio.h>
 
int main(){
 
    int a, y = 0;
 
    scanf("%i", &a);
 
    do{
        y += a % 10;
        a = a / 10;
 
    }while(a > 0);
 
    printf("%d\n", y);
 
    return 0;
}
