#include <stdio.h>
#include <string.h>

int main() {
    int k;
    char word[100];
    scanf("%d %s", &k, word);
    int len = strlen(word);
    for (int i = 0; i < len; i++) {
        if (i != k - 1) {
            printf("%c", word[i]);
        }
    }
    printf("\n");
    
    return 0;
}
