#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){
     
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
     
    if((y1-y2)==0 && abs(x1-x2)==1 || (x1-x2)==0 && abs(y1-y2)==1 || abs(x1-x2)==1 && abs(y1-y2)==1){
        printf("YES");
    }else printf("NO");
 
    return 0;
}
