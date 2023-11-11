#include<stdio.h>
 
int main(){
 
    int narx1, narx2, narx3;
    int box1, box2, box3;
    int max_narx, min_narx;
    int max_box, min_box;
    scanf("%d %d %d %d %d %d", &narx1, &narx2, &narx3, &box1, &box2, &box3);
 
    max_narx = narx1;
 
    if(narx2 > max_narx){
        max_narx = narx2;
    }
    if(narx3 > max_narx){
        max_narx = narx3;
    }
 
    min_narx = narx1;
     
    if(min_narx>narx2){
        min_narx = narx2;
    }
    if(min_narx>narx3){
        min_narx = narx3;
    }
 
    int med_narx = narx1+narx2+narx3-max_narx-min_narx;
 
    max_box = box1;
 
    if(box2 > max_box){
        max_box = box2;
    }
    if(box3 > max_box){
        max_box = box3;
    }
 
    min_box = box1;
 
    if(box2 < min_box){
        min_box = box2;
    }
    if(box3 < min_box){
        min_box = box3;
    }
 
    int med_box = box1+box2+box3-max_box-min_box;
 
    int natija = (max_narx*max_box)+(med_narx*med_box)+(min_narx*min_box);
 
    printf("%d", natija);
 
    return 0;
}
