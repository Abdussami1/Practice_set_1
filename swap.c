//You've given two variable 
//swap them with the method of your choice


#include <stdio.h>

int main() {
    int a = 5, b = 10,c;
    printf("Before swapping a=%d, b=%d.\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping a=%d, b=%d.\n",a,b);
    return 0;
}