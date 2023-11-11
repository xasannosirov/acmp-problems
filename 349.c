#include <stdio.h>
#include <stdbool.h>
 
bool tub(int number)
{
    if(number <= 2){
        if(number == 2){
            return true;
        }
        else{
            return false;
        }
    }
    if(number % 2 == 0){
        return false;
    }
 
    int i = 3;
    while(i*i <= number){
        if(number % i == 0){
            return false;
        }
        i+=2;
    }
    return true;
}
 
int main()
{
    int a, b;
 
    scanf("%d %d",&a, &b);
    int check = 0;
    while(a <= b){
        if(tub(a)){
            printf("%d\n",a);
            check = 1;
        }
        a+=1;
    }
 
    if(!check){
        printf("Absent");
    }
 
    return 0;
}
