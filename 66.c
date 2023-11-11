#include <stdio.h>
 
int main(){
     
    char symbol;
    scanf("%c",&symbol);
 
    switch(symbol)
    {
        case 'q': printf("%c",'w'); break;
        case 'w': printf("%c",'e'); break;
        case 'e': printf("%c",'r'); break;
        case 'r': printf("%c",'t'); break;
        case 't': printf("%c",'y'); break;
        case 'y': printf("%c",'u'); break;
        case 'u': printf("%c",'i'); break;
        case 'i': printf("%c",'o'); break;
        case 'o': printf("%c",'p'); break;
        case 'p': printf("%c",'a'); break;
        case 'a': printf("%c",'s'); break;
        case 's': printf("%c",'d'); break;
        case 'd': printf("%c",'f'); break;
        case 'f': printf("%c",'g'); break;
        case 'g': printf("%c",'h'); break;
        case 'h': printf("%c",'j'); break;
        case 'j': printf("%c",'k'); break;
        case 'k': printf("%c",'l'); break;
        case 'l': printf("%c",'z'); break;
        case 'z': printf("%c",'x'); break;
        case 'x': printf("%c",'c'); break;
        case 'c': printf("%c",'v'); break;
        case 'v': printf("%c",'b'); break;
        case 'b': printf("%c",'n'); break;
        case 'n': printf("%c",'m'); break;
        case 'm': printf("%c",'q'); break;
    }
 
    return 0;
}
