/**
 * Author - Debag101
 * Purpose - Min and max val of an array
 * Date - 15 5 2023
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Creating protoypes of required methods
void minMax(int*, int);
void displayArray(int*, int);

//Main execution starts here
int main(int argc, char const *argv[]) {
    int size;
    printf("\nHow many elements do you have ? => ");
    //Getting size of array
    scanf("%d",&size);
    //Declaring array of length size
    int numbers[size];
    //Getting the elements in the array
    for(int i = 0; i < size; ++i) {
        printf("\nEnter the element at index %d => ",i);
        scanf("%d",&numbers[i]);
    }
    //Printing the user's array once
    printf("\nYour numbers are => ");
    displayArray(numbers,size);
    //Next printing result
    printf("\nSum of only even numbers are => ");
    minMax(numbers,size);
    //Exit code

    printf("\nenter anything to exit ........");
    getch();
    system("cls");

    return 0;
}

void minMax(int arr[], int size) {
    //Variable to hold the result of summation of even numbers
    int min = 0, max = 0;
    for(int i = 0; i < size; i++) {
        if(i == 0) {
            min = arr[0];
        }
        else if(min > arr[i]) {
            min = arr[i];
        }
        else if(max < arr[i]) {
            max = arr[i];
        }
    }
    printf("\nMaximum value in array is : %d and minimum value is %d ",max,min);

}

//Simple method to nicely display an array
void displayArray(int arr[], int size) {
    printf("%c",'[');
    for(int i = 0; i < size; i++) {
        if(i == size - 1)
            printf("%d%c",arr[i],']');
        else 
            printf("%d%c",arr[i],',');
    }
}