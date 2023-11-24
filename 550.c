#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("12");
    } else {
        printf("13");
    }
    printf("/09/%04d", year);

    return 0;
}
