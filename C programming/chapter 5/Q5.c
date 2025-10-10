/*what will the following line produce in ac program 
printf("%d %d %d\n" , a , ++a , a++);*/

#include<stdio.h>

int main(){
    int a = 2;

    printf("%d %d %d\n" , a , ++a , a++);

    return 0;
}
