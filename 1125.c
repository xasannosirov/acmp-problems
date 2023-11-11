#include <stdio.h>
 
int main(){
 
    int a, b = 1, c;
 
    scanf("%i", &a);
 
    while(b * b <= a){
        c = b * b;
        printf("%i\n", c);
        b++;
    }
    return 0;
}
