#include <stdio.h>
#include <string.h>
 
int main()
{
 
    char a,b,c;
    scanf("%c %c %c",&a,&b,&c);
 
    int summa = 0;
    if(65 <= a && a <= 90 || 97 <= a && a <= 122){
        summa += 1;
    }
    if(65 <= b && b <= 90 || 97 <= b && b <= 122){
        summa += 1;
    }
    if(65 <= c && c <= 90 || 97 <= c && c <= 122){
        summa += 1;
    }
    printf("%d",summa);
 
    return 0;
}
