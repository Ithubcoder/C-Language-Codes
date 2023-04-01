#include<stdio.h>

// WAP to calculate percentage and grade of a student.

int main(){

    float phy,chem,math,bee,cse,tperc,fperc,perc,tmarks;

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

    tmarks = 500;
    perc = (phy + chem + math + bee + cse)/tmarks;
    fperc = perc * 100;
    printf("Your Percentage is : %f  \n",fperc);

    if(fperc > 80)
    printf("Your Grade is : A+ \n");

    if(fperc <=80 && fperc >= 70)
    printf("Your Grade is : A \n");

    if(fperc <= 70)
    printf("Your Grade is : B \n");

    return 0;

}