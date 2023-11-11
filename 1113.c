#include<stdio.h>
 
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a % b == 0 || b % a == 0)
        printf("%d", 1);
    else
        printf("%d", 666);
    return 0;
}
