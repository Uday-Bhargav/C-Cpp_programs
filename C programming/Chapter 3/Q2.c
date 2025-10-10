#include<stdio.h>
int main(){

    int m1,m2,m3;

    printf("Enter m1 :\n");
    scanf("%d\n", &m1);
    printf("Enter m2 :\n");
    scanf("%d\n", &m2);
    printf("Enter m3 :\n");
    scanf("%d\n", &m3);

    printf("the marks of three subjects are %d %d and %d\n" , m1,m2,m3);

    if (m1 < 33 || m2 < 33 || m3 < 33)
    { 
     printf("you are failed in an individual subject due to less marks\n");   
    }
    else if ((m1 + m2 + m3)/3 < 40)
    {
       printf("You are failed due to less percenage\n");
    }
    else
    {
        printf("Congratulations! you are pass\n");
    }
return 0;
}