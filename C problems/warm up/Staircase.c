#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int r,n,j,k; 
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
        printf(" ");}
        for(k=0;k<=i;k++)
        {
            printf("#");}
            printf("\n");
        
        
    }
    return 0;
}

