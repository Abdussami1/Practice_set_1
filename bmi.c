//you've given height and weight
// make a new variable BMI 
//and calculate the respective BMI

#include <stdio.h>


int main() {
    float BMI;
    float height = 1.82;
    float weight = 72;
    BMI=weight/(height*height);
    printf("BMI is %f.\n",BMI);
    return 0;
}
