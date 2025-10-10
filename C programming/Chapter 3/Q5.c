/*Program for determining lowercase charcters*/

#include<stdio.h>
int main(){

    char ch = 'd';
    
    printf("the character is %c\n" , ch);
    printf("the value of character is %d\n" , ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("the character is lowercase\n");
    }
    else{
        printf("The character is not lowercase\n");
    }
    return 0;
    
}