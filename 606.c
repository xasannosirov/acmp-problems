#include <stdio.h>
 
int main() {
    int x, y, z;
    scanf("%d %d %d",&x,&y,&z);
    int res;
    if (x + y > z && x + z > y && y + z > x){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
