#include<stdio.h>
 
int main(){
 
    int a, b, c, max, min;
    scanf("%d %d %d", &a, &b, &c);
 
    max = a;
 
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    min = a;
     
    if(min>b){
        min = b;
    }
    if(min>c){
        min = c;
    }
     
    if(max <= 727 && min >= 94){
        printf("%d", max);
    }
    else{
        printf("Error");
    }
 
    return 0;
}
