/*if we want to perform an operation on an integer or values so we have to write
a very big block of code and this can result in confusion and also it will make our code lengthy
so we'll use 'functions to resolve this problem , and you'll see it in the code.*/

#include<stdio.h>

int sum(int , int); //function prototype

int sum(int x , int y){
    printf("the sum is %d\n", x + y); // function definition
    //function can be defined before function call,there's no problem in it
}
    int main(){
        int a = 2;
        int b = 2;

        sum(a,b); //function call

        int a1 = 4;
        int b1 = 4;

        sum(4,4); //function call

        int a2  = 10;
        int b2 = 12;

        int c = sum(a2,b2);//another way of calling function OR function call
        printf("%d\n" , c);

        return 0;
    }
