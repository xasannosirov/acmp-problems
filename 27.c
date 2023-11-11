#include <stdio.h>
 
int main() {
    int w, h;
    scanf("%d %d", &w, &h);
    int n;
    scanf("%d", &n);
    int count = 0;
    int canvas[101][101] = {0};
    for (int i = 0; i < n; ++i) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for (int i = x1; i < x2; ++i) {
            for (int j = y1; j < y2; ++j) {
                count += !canvas[i][j];
                canvas[i][j] = 1;
            }
        }
    }
    printf("%d", w * h - count);
  
    return 0;
}
