#include<stdio.h>

int main(){
    int arr[50], size, small, pos=0;

    printf("Enter the size of an array \n");
    scanf("%d", &size);

    printf("Enter the elements \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    small = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
            pos = i;
        }
        
    }

    printf("The smallest element in the array : %d \n", small);
    printf("The position of the smallest element  : %d \n", pos);
    
}