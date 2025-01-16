#include<stdio.h>

int main(){
    int arr[50], size, sum =0 , mean;

    printf("Enter the size of an array \n");
    scanf("%d", &size);

    printf("Enter the elements \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    mean = sum / size;

    
    printf("Sum of elements : %d \n", sum);
    printf("Mean of elements : %d", mean);
    
}