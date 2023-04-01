# include<stdio.h>

/* Switch Menu Driven Program */

int main(){

    int choice, a, b;

    while (1){
        printf("Enter a Choice to perform the Operations.");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Enter First Number : ");
                scanf("%d",&a);

                printf("Enter Second Number : ");
                scanf("%d",&b);

                printf("Sum of the Two Numbers is : %d \n", a + b);

            case 2:
                printf("Enter a Number : ");
                scanf("%d",&a);
        
                if (a%2 == 0)
                printf("Number is Even \n");
                else
                printf("Number is Odd \n");

            case 3:
                exit (0);  /*Terminates the Program Execution.*/

            default:
                printf("Wrong Choice Entered.");
        }
    }

    return 0;
}