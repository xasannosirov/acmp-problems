#include <stdio.h>
#include <stdbool.h>
 
int tub(int number){
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
    int n, m;
    scanf("%d %d",&n, &m);
    int sum = 0;
    while(n <= m){
        if(tub(n)){
            printf("%d\n",n);
            sum += 1;
        }
        n+=1;
    }
    if(sum == 0){
        printf("Absent");
    }
    return 0;
}
