#include <stdio.h>
#include <math.h>
 
int main(){
     
    long long a, b;
    scanf("%lld %lld ", &a, &b);
     
    printf("%lld", ((a%b) + abs(b)) % abs(b));
     
    return 0;
}
