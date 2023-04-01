#include<stdio.h>

/*Ramesh's basic salary is input through the keyboard.
His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.
WAP to calculate his gross salary.*/

int main(){

    float basic_salary, dearness_allowance, house_rent_allowance, gross_salary;

    printf("Enter Ramesh's Basic Salary : ");
    scanf("%f",&basic_salary);

    printf("Basic Salary of Ramesh is : %f \n",basic_salary);

    dearness_allowance = 0.4 * basic_salary;
    
    house_rent_allowance = 0.2 * basic_salary;

    gross_salary = dearness_allowance + house_rent_allowance + basic_salary;

    printf("Dearness Allowance is : %f \n",dearness_allowance);

    printf("House Rent Allowance is : %f \n",house_rent_allowance);

    printf("Gross Pay of Ramesh is : %f \n",gross_salary);

    return 0;
}