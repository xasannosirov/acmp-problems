#include <stdio.h>
#include <stdlib.h>
 
int main(){
 
    int n;
    scanf("%d",&n);
    int summa = 0;
 
    if (n == 0){
        printf("%d",1);
        exit(0);
    }
 
    if (n > 0){
        int start = 1;
        while (start <= n){
            summa += start;
            start+=1;
        }
        printf("%d",summa);
    }
    else{
 
        int start = 1;
        while (start >= n){
            summa += start;
            start-=1;
        }
        printf("%d",summa);
    }
 
    return 0;
}
