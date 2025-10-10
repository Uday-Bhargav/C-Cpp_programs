/*Create a 2-d array by taking input from the user. Write a display
function to print the content of this 2d array on the screen.*/

#include<stdio.h>

int main(){
    int arr[3][2];

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 2; j++)
    {
        printf("Enter value %d and %d\n" , i , j);
        scanf("%d " , &arr[i][j]);
    }
}
    printf("the 2d array is\n");
    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d " , arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}