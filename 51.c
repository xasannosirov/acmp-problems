#include <stdio.h>
#include <string.h>
 
int main() {
     
    long n;
    scanf("%ld", &n);
     
    char undov[21];
    scanf("%s", undov);
     
    const long k = strlen(undov);
    long fact = 1;
     
    for (long d = 0; d < n; d += k) {
        fact *= (n - d);
    }
     
    printf("%ld", fact);
     
    return 0;
}
