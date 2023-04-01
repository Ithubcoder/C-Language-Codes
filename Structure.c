# include<stdio.h>
# include<string.h>

struct student{                 // Creating a Structure

    char name[20];
    int rollno;
    float cgpa;
};

void main(){

    struct student s1;          // Inserting values into a Structure
    strcpy(s1.name,"Mukul");
    s1.rollno = 101;
    s1.cgpa = 8.5;

    printf("Student's name is : %s \n",s1.name);     // Printing values of a structure
    printf("Student's rollno is : %d \n",s1.rollno);
    printf("Student's cgpa is : %f \n",s1.cgpa);
}