#include <stdio.h>
 
int main()
{
    char a;
    scanf("%s",&a);
    int b = (int)a;
    if(48 <= b && b <= 57){
        printf("Yes");
    }else printf("No");
 
    return 0;
}
