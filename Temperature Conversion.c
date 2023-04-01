#include<stdio.h>

/*Temperature of a city in Farenheit degrees is input through the keyboard.
WAP to convert this temperature into Centigrade degrees.*/

int main(){

    float faren, centigrade;

    printf("Enter Temperature in Farenheit : ");
    scanf("%f",&faren);

    printf("Temperature in Farenheit is : %f \n",faren);

    centigrade = (faren - 32) * 5/9 ;

    printf("Temperature in Centigrade is : %f \n",centigrade);

    return 0;
}