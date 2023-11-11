#include <stdio.h>
 
char swap_case(char a){
    if(a>=65 && a<=90){
        return a+32;
    }
    if(a>=97 && a<=122){
        return a-32;
    }
    else{
        return a;
    }
}
 
int main(){
    char c;
    scanf("%c", &c);
    printf("%c", swap_case(c));
    return 0;
}
