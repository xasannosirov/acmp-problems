#include<stdio.h>
 
int main(){
 
    long int a;
    scanf("%ld", &a);
 
    int reverse = 0, d = a;
    while(d>0){
        reverse = reverse * 10 + d % 10;
        d /= 10;
    }
     
    if(a == reverse){
        printf("YES");
    }
    else{
        printf("NO");
    }
 
    return 0;
}
