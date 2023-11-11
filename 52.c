#include<stdio.h>
 
int main(){
 
    int a, b=0, c=0;
    scanf("%d", &a);
 
    for(int i = 0; i < 3; i++){
        b+=a%10;
        a/=10;
    }
    // printf("b= %d ", b);
 
    for(int i = 0; i < 3; i++){
        c+=a%10;
        a/=10;
    }
    // printf("c= %d ", c);
 
    if(b==c){
        printf("YES");
    }
    else{
        printf("NO");
    }
 
    return 0;
}
