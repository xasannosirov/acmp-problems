#include <stdio.h>
 
int main() {
    int l, w, h;
    scanf("%d %d %d", &l, &w, &h);
    int temp = 2 * (l * h + w * h);
    printf("%d", (temp + 15) / 16);
  
    return 0;
}
