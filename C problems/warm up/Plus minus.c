#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i; 
    scanf("%d",&n);
    int  a[n];
    float d,k,p,l;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=0;
     for(i=0;i<n;i++)
    {
      if(a[i]>0)
        {
            k=k+1;
        }
        
    } 
      k=k/n;  
    printf("%0.6f\n",k);
     p=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            p=p+1;
        }
       
    }
     p=p/n;
    printf("%0.6f\n",p);
    l=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
       {
            l=l+1;
        }
        
    }   
    l=l/n;
    printf("%0.6f\n",l);
    return 0;
}

