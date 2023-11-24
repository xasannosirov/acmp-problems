#include <stdio.h>
#include <string.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int one, two;
    scanf("%d %d", &one, &two);
    char mode[10];
    scanf("%s", mode);

    if (strcmp(mode, "freeze") == 0) {
        printf("%d", min(one, two));
    }else if (strcmp(mode, "heat") == 0) {
        printf("%d", max(one, two));
    }else if (strcmp(mode, "auto") == 0) {
        printf("%d", two);
    }else {
        printf("%d", one);
    }
    
    return 0;
}
