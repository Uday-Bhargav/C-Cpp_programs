//Writing or editing a file in c.

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    
    char data[50] = "Hello Uday how are you, Keep learning and growing.";

    fptr = fopen("flie.txt" , "w");

    if(fptr == NULL){
        printf("The file is not opened.\n");
    }else{
        printf("File is openend successfully\n");
        fputs(data, fptr);
        fputs("\n", fptr);

        fclose(fptr);
        printf("the data is now successfully written in file.\n");
        printf("the file is successfully closed.\n");
    }
    return 0;
    }