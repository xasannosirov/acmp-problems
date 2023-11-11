#include<stdio.h>

int main(){

    char a;
    int  b, collect=0;
    scanf("%c%d",&a,&b);

    if(66<=a+b && 80>=a+b){
        collect=a+b;
        if(collect%2==1){
                printf("WHITE");
        }
        else if(collect%2==0){
                printf("BLACK");
        }
    }
    
    return 0;
}
