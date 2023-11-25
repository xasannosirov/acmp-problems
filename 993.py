#include <stdio.h>
 
int main(){
 
    long long int a, b, c, t;
    scanf("%lld %lld %lld %lld",&a, &b, &c, &t);
 
    if (a < t){
        printf("%lld",(a*b)+((t-a)*c));
    }else{
        printf("%lld",t*b);
    }
 
    return 0;
}
