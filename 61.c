#include<stdio.h>
 
int main(){
 
    int a, b, x1 = 0, x2 = 0;
     
    for(int i = 0; i < 8; i+=2){
        scanf("%d %d", &a, &b);
        x1+=a; x2+=b;
    }
 
    if(x1 > x2){
        printf("1");
    }
    else if(x1 < x2){
        printf("2");
    }
    else{
        printf("DRAW");
    }
 
    return 0;
}
