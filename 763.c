#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    if (x == 1 && y == 1) {
        printf("0");
    } else if (x == 1 || y == 1 || x != y) {
        printf("1");
    } else {
        printf("2");
    }
    return 0;
}
