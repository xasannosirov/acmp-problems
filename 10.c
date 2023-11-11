#include <stdio.h>
 
int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
     
    for (long long x = -100; x <= 100; ++x) {
        if (a * x * x * x + b * x * x + c * x + d == 0) {
            printf("%lld ", x);
        }
    }
     
    return 0;
}
