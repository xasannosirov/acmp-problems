#include <stdio.h>
#include <string.h>
 
int main()
{
 
    char text[101];
 
    scanf("%s",text);
 
    for(int i = 0; i < strlen(text); i++){
        if(text[i] != '4' && text[i] != '7'){
            printf("%c",text[i]);
        }
    }
 
    return 0;
}
