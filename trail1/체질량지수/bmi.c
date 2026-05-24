#include <stdio.h>

int main() {
    // Please write your code here.
    int h,w;
    scanf("%d %d",&h,&w);
    printf("%d\n",(10000*w)/(h*h));
    if((10000*w)/(h*h)>=25){
        printf("Obesity");
    }
    return 0;
}