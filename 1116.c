#include<stdio.h>
 
int main(){
    int a,b,c,a1,b1,c1,res,res1;
    scanf("%d %d %d", &a,&b, &c);
    scanf("%d %d %d", &a1, &b1, &c1);
     
    if(a<=23 && b<=59 && c<=59)
    res=a*3600+b*60+c;
     
    if(a1<=23 && b1<=59 && c1<=59)
    res1=a1*3600+b1*60+c1;
     
    printf("%d", res1-res);
     
    return 0;
}
