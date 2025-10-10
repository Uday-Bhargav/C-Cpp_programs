//Implement proogram 11 using do-while loop.

#include<stdio.h>
#include<math.h>

int isprime(int);

int isprime(int n){
    if(n <= 1){
        return 0;
    }
    else if (n == 2 || n == 3)
    {
        return 1;
    }else if (n % 2 == 0 || n % 3 == 0)
    {
        return 0;
    }else{
        int i = 5;
        do
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                return 0;
            }else{
                i += 6;
                return 1;
            }
            
        } while (i <= sqrt(n));
        
    }
}
int main(){
    int num;

    printf("Enter number:" , num);
    scanf("%d" , &num);

    if (isprime(num))
    {
        printf("%d is a prime number" , num);
    }else{
        printf("%d is not a prime number" , num);
    }

return 0;
}