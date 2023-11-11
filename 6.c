#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() {
    char enter[6];
    scanf("%s", enter);
     
    if (strlen(enter) != 5 || enter[2] != '-') {
        printf("ERROR\n");
        exit(0);
    }
     
    char check[] = "12345678ABCDEFGH-";
    for (int i = 0; i < strlen(enter); i++) {
        if (strchr(check, enter[i]) == NULL) {
            printf("ERROR\n");
            exit(0);
        }
    }
     
    char one[3], two[3];
    sscanf(enter, "%2s-%2s", one, two);
     
    if (strlen(enter) == 5 && strlen(one) == 2 && strlen(two) == 2) {
        if (65 <= one[0] && one[0] <= 90 && 65 <= two[0] && two[0] <= 90 && 48 <= one[1] && one[1] <= 57 && 48 <= two[1] && two[1] <= 57) {
            if (two[0] == one[0] - 2 && (two[1] == one[1] - 1 || two[1] == one[1] + 1)) {
                printf("YES\n");
            } else if (two[0] == one[0] + 1 && (two[1] == one[1] - 2 || two[1] == one[1] + 2)) {
                printf("YES\n");
            } else if (two[0] == one[0] + 2 && (two[1] == one[1] - 1 || two[1] == one[1] + 1)) {
                printf("YES\n");
            } else if (two[0] == one[0] - 1 && (two[1] == one[1] - 2 || two[1] == one[1] + 2)) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else {
            printf("ERROR\n");
            exit(0);
        }
    } else {
        printf("ERROR\n");
        exit(0);
    }
     
    return 0;
}
