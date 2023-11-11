#include <stdio.h>
 
int main() {
    int k;
    scanf("%d", &k);
    int height = 0;
     
    while (height * (height + 1) / 2 <= k) {
        height += 1;
    }
    printf("%d", height - 1);
    
    return 0;
}
