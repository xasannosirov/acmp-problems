#include <stdio.h>
 
int compute_gcd(int x, int y) {
    while(y) {
        int temp = y;
        y = x % y;
        x = temp;
    }
  
    return x;
}
 
int compute_lcm(int x, int y) {
    int gcd = compute_gcd(x, y);
    int lcm = (x * y) / gcd;
  
    return lcm;
}
 
int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d\n", compute_lcm(num1, num2));

    return 0;
}
