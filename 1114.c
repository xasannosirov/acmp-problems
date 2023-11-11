#include<stdio.h>
 
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
     
    int masofa = a * b + 1;
    if(masofa>0)
        if(masofa % 109==0)
            printf("109");
        else
            printf("%d", masofa % 109);
    else{
        masofa = -masofa;
        printf("%d", 109- masofa % 109);
    }
         
    return 0;
}
