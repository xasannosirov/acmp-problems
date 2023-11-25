#include <stdio.h>

int main()
{
    int a, b, c, t;
    scanf("%d %d %d %d",&a, &b, &c, &t);

    if (a < t){
        printf("%d",(a*b)+((t-a)*c));
    }else{
        printf("%d",t*b);
    }

    return 0;
}
