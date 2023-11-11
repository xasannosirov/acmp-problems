#include<stdio.h>
 
int main(){
    int a;
    scanf("%d", &a);
    if(a % 10 == 0)
        printf("%d", a / 10);
    if(a % 10 != 0)
        printf("%d", a / 10 + 1);
    return 0;
}
