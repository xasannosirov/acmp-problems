#include <stdio.h>
#include <string.h>
 
int main(){
    char a,b,c;
    scanf("%c %c %c",&a,&b,&c);
    int summa = 0;
    if(48 <= a && a <= 57){
        summa += 1;
    }
    if(48 <= b && b <= 57){
        summa += 1;
    }
    if(48 <= c && c <= 57){
        summa += 1;
    }
    printf("%d",summa);
 
    return 0;
}
