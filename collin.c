#include<stdio.h>
int main(){
    float x1,x2,y1,y2,y3,x3;
    float area;
    
    printf("enter coordinates of first point");
    scanf("%f %f",&x1,&y1);
    printf("enter coordinates of second point");
    scanf("%f %f",&x2,&y2);
    printf("enter coordinates of third point");
    scanf("%f %f",&x3,&y3);

    area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
    
    if (area==0){
        printf("points are collinear\n");
    }
    else{
        printf("points not collinear\n");
    }
    return 0;


}
