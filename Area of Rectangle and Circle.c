# include<stdio.h>

/*The length and breath of the rectangle and radius of a circle are input through the keybaord.
WAP to calculate the area and perimeter of the rectangle, and the area and circumference of the circle.*/

int main(){

    float length, breath, area_r, peri, radius, circumference, area_c;

    printf("Enter the Length : \n");
    scanf("%f",&length);
    printf("Enter the Breath : \n");
    scanf("%f",&breath);

    peri = (length + breath) * 2;
    printf("Perimeter of the Rectangle is : %f \n",peri);

    area_r = length * breath;
    printf("Area of the Rectangle is : %f \n",area_r);

    printf("Enter Radius of the Circle : \n");
    scanf("%f",&radius);

    circumference = 2 * 3.14 * radius;
    printf("Circumference of the Cirlce is : %f \n",circumference);

    area_c = 3.14 * radius * radius;
    printf("Area of the Circle is : %f \n",area_c);

    return 0;
}