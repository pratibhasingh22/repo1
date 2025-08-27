#include<stdio.h>
int main(){
    float s1,s2,s3;

    printf("enter three sides");//taking sides input from the user
    scanf("%f %f %f",&s1,&s2,&s3);

    if(((s1+s2)>s3) && ((s2+s3)>s1) && ((s3+s1)>s2)){
        printf("triangle is valid\n");

        if(s1==s2 && s2==s3){
            printf("triangle is equilateral\n");
        } 
        
        else if(s1==s2||s2==s3||s3==s1){
            printf("triangle is isoceles\n");
        }
        else if ((s1*s1==s2*s2+s3*s3)||(s2*s2==s1*s1+s3*s3)||(s3*s3==s2*s2+s1*s1)){
            printf("triangle is right angled\n");
        }
        else{
            printf("triangle is scalene\n");
        }
    }    
    else{
        printf("triangle is invalid\n");
    }
    return 0;
    
}   