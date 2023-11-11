#include <stdio.h>
 
int main(){
     
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
     
    if((a+c) % 2 == 0 && (b+d) % 2 == 0 || (a+c) % 2 == 1 && (b+d) % 2 == 1)
        printf("YES");
    else printf("NO");
     
    return 0;
}
