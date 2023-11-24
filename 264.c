#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    int max_count = 0;
  
    for (int i = 0; i < n; ++i) {
        int temp;
        scanf("%d", &temp);
        if (temp > 0) {
            count += 1;
            if (max_count < count) {
                max_count = count;
            }
        }else {
            count = 0;
        }
    }
    printf("%d", max_count);

    return 0;
}
