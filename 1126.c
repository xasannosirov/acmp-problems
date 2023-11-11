#include <stdio.h>
 
int main(){
    int a, h =2;
    scanf("%d", &a);
     
    while(a>=h){
        if(a%h==0){           
            break;
        }
        h++;
    }
    printf("%d", h);
     
    return 0;
}
