#include<stdio.h>
int main(){
    int x1,x2,y1,y2,y3,x3;
    int area;
    //taking input of the coordinates
    printf("enter coordinates of first point");
    scanf("%f %f",&x1,&y1);
    printf("enter coordinates of second point");
    scanf("%f %f",&x2,&y2);
    printf("enter coordinates of third point");
    scanf("%f %f",&x3,&y3);
    //calculating the area
    area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
    //checking of they are collinear
    if (area==0){
        printf("points are collinear\n");
    }
    else{
        printf("points not collinear\n");
    }
    return 0;


}


