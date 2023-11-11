#include <stdio.h>
 
int main() {
     
    int w, h, r, temp;
     
    scanf("%d %d %d", &w, &h, &r);
     
    if (w < h){
        temp = w;
    }
    else{
        temp = h;
    }
 
    if (2 * r <= temp){
        printf("YES");
    }
    else{
        printf("NO");
    }
 
    return 0;
}
