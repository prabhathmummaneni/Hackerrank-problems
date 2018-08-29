#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int d1; 
    int m1; 
    int y1,p; 
    scanf("%d %d %d",&d1,&m1,&y1);
    int d2,k,l,h=0; 
    int m2; 
    int y2; 
    scanf("%d %d %d",&d2,&m2,&y2);
    if(y1>y2)
    {
        h=10000;
    }
    else
    {
        if(d1>d2&&m1==m2&&y1==y2)
        {
            k=d1-d2;
            h=k*15;
        }
        if(m1>m2&&y1==y2)
        {
            l=m1-m2;
            h=l*500;
    }}
printf("%d",h);
    return 0;
}
