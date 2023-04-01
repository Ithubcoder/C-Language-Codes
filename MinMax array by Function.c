# include<stdio.h>

/* WAP to find maximum and minimum element in an array by using functions. */

int min(int[]);
int max(int[]);

int main(){
    int array[10]={1,2,3,2,5,6,7,8,9,6};
    int small, large;
    small = min(array);
    large = max(array);
    printf("Smallest Element of the given Array is : %d \n",small);
    printf("largest Element of the given Array is : %d \n",large);
    return 0;
}

int min(int array[]){

    int i, smallest;
    smallest = array[0];
    for(i=0;i<10;i++){
        if (smallest > array[i]){
            smallest = array[i];
        }
    }
    return smallest;
}

int max(int array[]){

    int i, largest;
    largest = array[0];
    for(i=0;i<10;i++){
        if (largest < array[i]){
            largest = array[i];
        }
    }
    return largest;
}