#include<iostream.h>
#include <stdio.h>
int main() {
    int a,b,temp;
    printf("Enter the numbers a and b :\n");
    scanf("%d%d",&a,&b);
    printf("\nBefore swapping : a=%d and b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: a=%d and b=%d",a,b);
    return 0;
}
