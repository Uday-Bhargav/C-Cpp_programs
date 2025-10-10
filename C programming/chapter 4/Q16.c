/*Use a do-while loop to prompt the user to enter a positive number. 
If the user enters a negative number, the loop should ask them to try again.*/

#include<stdio.h>

int main(){
    int n , i = 0;

    printf("Enter a number:" , n);
    scanf("%d" , &n);

    do
    {
        if (n < 0)
        {
            printf("OOPS , Negative number entered\nTry again....");
            break;
        } 
    }while (n < 0);

        printf("Output:%d" , n);
        return 0;
}