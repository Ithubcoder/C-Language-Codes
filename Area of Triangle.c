# include<stdio.h>
# include<math.h>

/*If the lengths of three sides of the trialgle are input through the keyboard,
WAP to find the area of the triangle.*/

int main(){

    float a, b, c, sum, area;

    printf("Enter 1st Side of the Triangle : ");
    scanf("%f",&a);
    printf("Enter 2nd Side of the Triangle : ");
    scanf("%f",&b);
    printf("Enter 3rd Side of the Triangle : ");
    scanf("%f",&c);

    sum = (a + b + c) / 2;
    area = sqrt(sum * (sum-a) * (sum-b) * (sum-c));
    printf("Area of the Triangle is : %f",area);

    return 0;
}