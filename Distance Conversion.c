#include<stdio.h>

/*The distance between two cities (in kilometers) is input through keyboard.
WAP to convert and print this distance in meters, feet, inches and centimeters.*/

int main(){

    float km, inch, cm, feet, m;

    printf("Enter Distance in Kilometers : ");
    scanf("%f",&km);

    m = km * 1000;

    cm = m * 100;

    inch = cm / 2.54;

    feet = inch / 12;

    printf("Distance in Kilometers is %f \n",km);

    printf("Distance in Meters is %f \n",m);

    printf("Distance in Centimeters is %f \n",cm);

    printf("Distance in inches is %f \n",inch);

    printf("Distance in Feet is %f \n",feet);

    return 0;
}