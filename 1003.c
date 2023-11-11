#include<stdio.h>
 
int main(){
    long long int X,Y,Z;
    scanf("%lld %lld %lld", &X, &Y, &Z);
    printf("%lld", (long long int )(X*3)+(Y*5)+(Z*12));
    return 0;
}
