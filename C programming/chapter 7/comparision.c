#include<stdio.h>

int main(){
    int marks[5] = {1 , 2 , 3 , 4 , 5};
    int*ptr1 = &marks[4];
    int*ptr2 = &marks[3];

    if (ptr1 > ptr2)
    /*We can also use different comparision operators like:-
    ==
    !=
    < , > , <= , >= */
    {
        printf("p1 points to an earlier element than p2\n");
    }
    return 0;
}