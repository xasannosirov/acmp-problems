#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
     
    int newList[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &newList[i]);
    }
     
    int musbat = 0;
    for (int i = 0; i < n; i++) {
        if (newList[i] > 0) {
            musbat += newList[i];
        }
    }
     
    int max = 0;
    int min = 0;
    for (int i = 1; i < n; i++) {
        if (newList[i] > newList[max]) {
            max = i;
        }
        if (newList[i] < newList[min]) {
            min = i;
        }
    }
     
    if (min > max) {
        int temp = min;
        min = max;
        max = temp;
    }
     
    int kop = 1;
    while (min + 1 < max) {
        kop *= newList[min + 1];
        min += 1;
    }
     
    printf("%d %d\n", musbat, kop);
     
    return 0;
}
