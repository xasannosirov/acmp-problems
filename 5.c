#include <stdio.h>
#include <stdbool.h>
#include <string.h>
 
int main()
{
    int n;
    scanf("%d",&n);
    int number[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&number[i]);
    }
    int odd[n];
    int even[n];
    int l = 0, k = 0;
    for(int i = 0; i < n; i++){
        if(number[i] % 2){
            odd[l++] = number[i];
        }
        else{
            even[k++] = number[i];
        }
    }
 
    for(int i = 0; i < l; i++){
        printf("%d ",odd[i]);
    }
    printf("\n");
 
    for(int i = 0; i < k; i++){
        printf("%d ",even[i]);
    }
    printf("\n");
 
    if(k > 2 && l <= k){
        printf("YES");
    }
    else{
        printf("NO");
    }
 
    return 0;
}
