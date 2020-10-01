#include <stdio.h>


int so(int a, int b) {
   return a+b;
 
}
int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int sum; 
    sum = so(num1,num2);
    printf("%d",sum);
    return 0;
}
