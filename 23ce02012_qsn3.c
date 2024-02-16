#include <stdio.h>
int main(){
    int x,y,r,x1,y1,d;

    printf("Enter radius of circle\n");
    scanf("%d",&r);

    printf("Enter coordinates of center of circle\t");
    scanf("%d %d",&x,&y);

    printf("Enter point to be checked\t");
    scanf("%d %d",&x1,&y1);
    d=((x1-x)^2 +(y1-y)^2)^1/2 ;

    if (d=r)
    printf("point lies on the circle");
    else if(d<r)
    printf("point lies inside the ciorcle");
    else
    printf("point lies outside the circle");
    return 0;
    
}