#include<stdio.h>
 
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > b)
        printf("%c", '>');
    else if(a < b)
        printf("%c", '<');
    else
        printf("%c", '=');
    return 0;
}
