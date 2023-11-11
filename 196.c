#include <stdio.h>
 
int main(){
 
    int son;
    scanf("%d",&son);
 
    int arr[son][son];
 
    for (int i = 0, c = 1, m = 0; i <= son / 2; i++, m++){
        for (int j = m; j < son - m; j++)
            arr[i][j] = c++;
 
        for (int j = m + 1; j < son - m - 1; j++)
            arr[j][son - m - 1] = c++;
 
        for (int j = son - m - 1; c <= son * son && j >= m; j--)
            arr[son - i - 1][j] = c++;
 
        for (int j = son - m - 2; j > m; j--)
            arr[j][i] = c++;
    }
 
    for (int i = 0; i < son; i++){
        for (int j = 0; j < son; j++){
            printf("%2d ",arr[i][j]);
        }
        puts("");
    }
 
    return 0;
}
