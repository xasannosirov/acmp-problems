#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    int summa = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            summa++;
        }
        n /= 2;
    }
    printf("%d\n", summa);
    return 0;
}
