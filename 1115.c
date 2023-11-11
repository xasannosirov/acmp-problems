#include<stdio.h>
 
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d ", b/a);
    printf("%d ", b%a);
    if(b%a==0)
        printf("%d ", 0);
    else
         
        printf("%d ", a-(b%a));
    return 0;
}
