#include<stdio.h>
int main(){
    float l1,l2,l3,b1,b2,b3;
    float p1,p2,p3;
    int largest;
    printf("enter the length and breadth of the first rectangle");
    scanf("%f %f",&l1,&b1);
    printf("enter the length and breadth of the second rectangle");
    scanf("%f %f",&l2,&b2);
    printf("enter the length and breadth of the  rectangle");
    scanf("%f %f",&l3,&b3);

    p1=2*(l1+b1);
    p2=2*(l2+b2);
    p3=2*(l3+b3);
    
    largest = (p1 > p2 && p1 > p3) ? 1 :(p2 > p1 && p2 > p3) ? 2 : 3;
    printf("Rectangle %d has the highest perimeter.\n", largest);

}