#include <stdio.h>
 
int main(){
 
    int n;
 
    scanf("%d", &n);
 
    int arr[n][n];
 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
 
    for(int i = n-1; i > -1; i--){
        for(int j = n-1; j > -1; j--){
            printf("%d ", arr[j][i]);
        }
        puts("");
    }
 
    return 0;
}
