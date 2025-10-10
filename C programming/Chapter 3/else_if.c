#include<stdio.h>

int main()
{
    int age = 45;

    if (age>60)
    {
        printf("You can drive and you are a senior citizen");
       
        /*if this condition is true then this condition will be executed
        and all other conditions are ignored
        But if this condition is false then it will be ignored and other 
        conditions are checked*/
    }
    else if(age > 40)
    {
        printf("you can drive and you are elder");
        
        /*if this condition is true then this condition will be executed
        and all other conditions are ignored
        But if this condition is false then it will be ignored and other 
        conditions are checked*/
    }
    else if (age > 18)
    {
        printf("you can drive");

        /*if this condition is true then this condition will be executed
        and all other conditions are ignored
        But if this condition is false then it will be ignored and other 
        conditions are checked*/
    }
    else{
        printf("you cannot drive");
         
        /*in last if all the conditions are false then this condition will
        be executed and displayed*/
    }
    return 0;
}