#include <stdio.h>
 
int main()
{
    int a;
    scanf("%d", &a);
 
    int array[a+2];
    int c = 0;
 
    for(int i = 0; i < a; i++) scanf("%d", &array[i]);
 
    array[a] = array[0];
    array[a+1] = array[1];
 
    for(int i = 1; i < a + 1; i++){
        int temp = array[i-1] + array[i] + array[i+1];
        if(temp > c) c = temp;
    }
 
    printf("%d ", c);
    return 0;
}
