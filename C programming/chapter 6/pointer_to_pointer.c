#include<stdio.h>

int main(){
    int i = 6;
    int* j = &i;
    int** k = &j; //k pointer will store the address of j or point towards j
    printf("The value of i is %d\n" , i );   
    printf("The value of i is %d\n" , *j );
    printf("The value of i is %d\n" , *(&i));
    printf("The value of i is %d\n" , *(&j));    
    printf("The value of i is %d\n" , **(&j));
    printf("The value of i is %d\n" , k);

    return 0;
}