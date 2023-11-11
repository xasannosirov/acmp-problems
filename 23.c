#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d",&n);
    int i = 1;
    int summa = 0;
 
    while (i <= n){
        if (n % i == 0){
            summa += i;
        }
        i+=1;
    }
    printf("%d",summa);
 
    return 0;
}
