#include <stdio.h>
 
int main(){
     
    int a;
    scanf("%i", &a);
     
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d", &arr[i]);
    }
 
    int max = arr[0], min = arr[0];
    for(int i = 1;i<a;i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    for(int i = 0;i<a;i++){
        if(arr[i]==max){
            arr[i] = min;
        }
        printf("%d ", arr[i]);
    }
  
    return 0;
}
