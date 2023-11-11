#include <stdio.h>
 
int main()
{
 
    char a;
    scanf("%s",&a);
    int b = (int)a;
    if(97 <= b && b <= 122){
        printf("%c",b-32);
    }else printf("%c",b);
 
    return 0;
}
