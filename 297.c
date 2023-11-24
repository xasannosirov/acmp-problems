#include <stdio.h>
#include <string.h>

int count_in(char ch) {
    switch (ch) {
        case '0':
        case '6':
        case '9':
            return 1;
        case '8':
            return 2;
    }
    return 0;
}

int main() {
    char n[100];
    scanf("%s", n);
    int count = 0;
    for (int i = 0; i < strlen(n); ++i) {
        count += count_in(n[i]);
    }
    printf("%d", count);
    
    return 0;
}
