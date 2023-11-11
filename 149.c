#include <stdio.h>
 
void teskari(int a, int text[])
{
    printf("%d ",text[a-1]);
    if(a > 1)
    {
        teskari(a-1,text);
    }
     
}
 
int main()
{
     
    int a;
    scanf("%d",&a);
 
    int text[a];
    for(int i = 0; i < a; i++){
        scanf("%d", &text[i]);
    }
     
    teskari(a,text);
 
    return 0;
}
