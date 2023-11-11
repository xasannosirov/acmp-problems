#include<stdio.h>
 
int main(){
    int a;
     
    scanf("%d", &a);
    printf("The next number for the number %d is %d.\n", a, a + 1);
    printf("The previous number for the number %d is %d.", a, a - 1);
     
    return 0;
}
