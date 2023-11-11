#include<stdio.h>
 
int main(){
  
    int a, b, a1, b1;
    scanf("%d %d %d %d", &a, &b, &a1, &b1);
     
    if(a==a1 || b==b1){
        printf("YES");
    }else printf("NO");
     
    return 0;
}
