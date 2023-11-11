#include <stdio.h>
#include <stdlib.h>
 
void output_fibannacci( int a, int b, int c, int count, int i )
{
    if(c == 0){
        printf("%d",0);
        exit(0);
    }
    if(i < c)
    {
        count = a+b;
        a = b;
        output_fibannacci(a, count, c, 0, i+1);
        printf("%d", b);
        exit(0);
    }
}
 
int main()
{
    int a = 0, b = 1, c, count = 0, i = 0;
    scanf("%d",&c);
 
    output_fibannacci(a, b, c, count, i);
 
    return 0;
}
