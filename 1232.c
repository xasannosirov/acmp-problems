#include <stdio.h>
 
int main(){
 
    int n, m;
 
    scanf("%d %d", &n, &m);
 
    int arr[n][m];
 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
 
    int column;
    for(int i = 0; i < n; i++){
        column = 0;
        for(int j = 0; j < m; j++){
            column += arr[i][j];
        }
        printf("%d ", column);
    }
    puts("");
 
    int row;
    for(int i = 0; i < m; i++){
        row = 0;
        for(int j = 0; j < n; j++){
            row += arr[j][i];
        }
        printf("%d ", row);
    }
    puts("");
    puts("");
     
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        puts("");
    }
 
    return 0;
}
