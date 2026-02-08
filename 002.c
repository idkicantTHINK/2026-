#include <stdio.h>
int main() {
 int a = 500; //lentgh of rectangle 
 int b = 60; //width of rectangle
 int c = a * b;
printf("Result1: %d\n", c);

// errors I did spelling of stdio & %d
//Using inputs supplied by the user 

    float length, width, area;

   printf("input length of rectangle: ");
    scanf("%f", &length);

    printf("input width of rectangle: ");
    scanf("%f", &width);


    //  the Area
    area = length * width;
    printf("result2:%.2f\n" ,area);



return 0;
}