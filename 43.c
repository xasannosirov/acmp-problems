#include <stdio.h>
#include <string.h>
  
int main()
{
  
    char text[101];
  
    scanf("%s",text);
    int count = 0;
    int max = 0;
    int check = 0;
    for(int i = 0; i < strlen(text); i++){
        if(text[i] == '0'){
            count +=1;
        }
        else{
            check = 1;
            if(max < count){
                max = count;
            }
            count = 0;
        }
    }
    if(check == 1 && count < max){
        printf("%d",max);
    }
    else if(check == 1 && count > max){
        printf("%d",count);
    }
    else{
        printf("%d",count);
    }
  
    return 0;
}
