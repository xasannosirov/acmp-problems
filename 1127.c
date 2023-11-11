#include <stdio.h>
 
int main(){
 
    int a, b = 1, c=0;
 
    scanf("%i", &a);
 
    while(b <= a){
        printf("%i\n", b);
        b*=2;
    }
    return 0;
}
