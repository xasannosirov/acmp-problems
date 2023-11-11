#include<stdio.h>
 
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a>=b)
        printf("%d", a*b*a);
    else
        printf("%d", a*b*b);
    return 0;
}
