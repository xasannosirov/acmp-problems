#include<stdio.h>
 
int main(){
 
    char first[10], second[10], thirth[10];
    scanf("%s", &*first);
    scanf("%s", &*second);
    scanf("%s", &*thirth);
 
    if(first[0]=='b' && second[0]=='b' && thirth[0]=='g')
        printf("black\nblack\nGREEN\n");
    else if(first[0]=='b' && second[0]=='b' && thirth[0]=='G')
        printf("black\nyellow\nblack\n");
    else if(first[0]=='b' && second[0]=='y' && thirth[0]=='b')
        printf("red\nblack\nblack\n");
    else if(first[0]=='r' && second[0]=='b' && thirth[0]=='b')
        printf("red\nyellow\nblack\n");
    else if(first[0]=='r' && second[0]=='y' && thirth[0]=='b')
        printf("black\nblack\ngreen\n");
    else if(first[0]=='b' && second[0]=='Y' && thirth[0]=='b')
        printf("black\nYELLOW\nblack\n");
    else if(first[0]=='R' && second[0]=='b' && thirth[0]=='b')
        printf("RED\nblack\nblack\n");
    else if(first[0]=='b' && second[0]=='b' && thirth[0]=='G')
        printf("black\nblack\nGREEN\n");
    else printf("error");  
 
    return 0;
}
