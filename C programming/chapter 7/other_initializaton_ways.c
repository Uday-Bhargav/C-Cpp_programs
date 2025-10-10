#include<stdio.h>

int main(){
    int cgpa[] = {7 , 8 , 9};

    for (int i = 0; i < 3; i++)
    {
        printf("The  cgpa at index %d is %d\n" , i , cgpa[i]);
    }
    return 0;
}