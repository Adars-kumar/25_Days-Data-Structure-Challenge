#include<stdio.h>

int main(){
    int arr[50], size, large, pos=0, second_large;

    printf("Enter the size of an array \n");
    scanf("%d", &size);

    printf("Enter the elements \n");


    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    large = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (large < arr[i])
        {
            large = arr[i];
        }  
    }

    second_large = arr[0];
    for (int i = 0; i < size; i++)
    {
       if (arr[i] != large)
       {
            if (arr[i] > second_large)
            {
                second_large = arr[i];
                pos = i;
            }
            
       }
       
    }
    
    printf("Second Largest element is : %d \n", second_large);
    printf("Position of second largest element is : %d \n", pos);
    


}