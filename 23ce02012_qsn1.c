#include <stdio.h>
int main(){
    float r,h;
    
    printf("Enter Radius of Cylinder \n");
    scanf("%f",&r);
    printf("Enter Height of Cylinder \n");
    scanf("%f",&h);

    printf("Volume of cylinder=%f\n",(3.14*r*r*h/3));
    printf("Surface area of cylinder=%f",(2*3.14*r*h));
    return 0;

}