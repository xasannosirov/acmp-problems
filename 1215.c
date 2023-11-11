#include <stdio.h>
#include <stdlib.h>
 
int main(){
  
    int a, need;
  
    scanf("%d", &a);
  
    int arr[a];
 
    for(int i = 0; i < a; i++){
        scanf("%d", &arr[i]);
    }
  
    scanf("%d", &need);
 
    int i = 0, min_index = 0, min = abs(need - arr[i]);
 
    for(i = 1; i < a; i++){
        int value = abs(need - arr[i]);
        if(value < min){
            min = value;
            min_index = i;
        }
        else if(min == value){
            if(arr[min_index] > arr[i]){
                min = value;
                min_index = i;
            }
        }
    }
    printf("%d", arr[min_index]);
  
    return 0;
}
