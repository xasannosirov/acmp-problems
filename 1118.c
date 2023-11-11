#include <stdio.h>
  
int main(){
      
    int h, a, b;
    scanf("%d %d %d",&h, &a, &b);
      
    int need = 0, day = 0;
    while(need != h && need < h){
        day++;
        need += a;
        if(need == h || need > h){
            break;
        }
        need -= b;
    }
    printf("%d",day);
  
    return 0;
}
