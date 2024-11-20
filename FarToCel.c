//You've given a temp in F
//make a new variable C
//and convert the respective temp into celcius


#include <stdio.h>

int main() {
    float fahrenheit = 98.3,c;
    c=(fahrenheit - 32)*5/9;
    printf("Temperature in fahrenheit is %f.\n",c);
    return 0;
}
