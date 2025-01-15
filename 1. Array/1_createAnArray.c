#include<stdio.h>

int main(){
    int arr[10] , size;

    printf("Enter the size of an array \n");
    scanf("%d", &size);

    printf("Enter the element: \n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The elements are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);

    }
    
    
}