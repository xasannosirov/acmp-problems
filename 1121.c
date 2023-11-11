#include <stdio.h>
#include <math.h>
#include <stdlib.h>
  
int main(){
   
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
      
    if(x1==x2 || y1==y2 || abs(x2-x1) == abs(y2-y1)){
        printf("YES");
    }else printf("NO");
      
    return 0;
}
