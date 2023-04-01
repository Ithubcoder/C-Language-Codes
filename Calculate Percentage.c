#include<stdio.h>

/*If the marks obtained by a student in 5 different subjects are input through the keyboard.
Write a program to find out the aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student in each subject is 100.*/

int main(){

    float phy,chem,math,bee,cse,tperc,fperc,perc,agrmarks;

    printf("Enter your Physics marks : \n");
    scanf("%f",&phy);
    printf("Enter your Chemistry marks : \n");
    scanf("%f",&chem);
    printf("Enter your Mathematics marks : \n");
    scanf("%f",&math);
    printf("Enter your BEE marks : \n");
    scanf("%f",&bee);
    printf("Enter your CSE marks : \n");
    scanf("%f",&cse);

    agrmarks = (phy + chem + math + bee + cse);
    perc = (phy + chem + math + bee + cse) / 500;
    fperc = perc * 100;

    printf("Your Aggregate Marks is : %f \n",agrmarks);
    printf("Your Percentage is : %f \n",fperc);

    return 0;
}