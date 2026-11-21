// Q1.Check whether a number is positive, negative or zero.
//  #include<stdio.h>
//  int main()
//  {
//      int num;
//      printf("Enter a number :");
//      scanf("%d" ,&num);

//     if(num > 0)
//     {
//         printf("Positive");
//     }
//     else if(num < 0)
//     {
//         printf("Negative");
//     }
//     else{
//         printf("zero");
//     }
//     return 0;
// }

// Q2.Find the largest among three numbers.
//  #include<stdio.h>

// int main()
// {
//     int a, b, c;
//     printf("Enter three numbers :");
//     scanf("%d %d %d" , &a , &b , &c);

//     if(a >= b && a >= c)
//     {
//         printf("a is largest");
//     }
//     else if(b >= a && b >= c)
//     {
//         printf("b is largest");
//     }
//     else{
//         printf("c is largest");
//     }

//     return 0;
// }

// Q3.Create a calculator using switch-case.
// #include <stdio.h>

// int main()
// {
//     int a, b, result;
//     char op;
//     printf("Enter a :");
//     scanf("%d", &a);
//     printf("Enter a operator(+ , - , / , *) :");
//     scanf(" %c", &op);
//     printf("Enter b :");
//     scanf("%d", &b);

//     switch (op)
//     {
//     case '+':
//         result = a + b;
//         printf("%d + %d = %d", a, b, result);
//         break;

//     case '-':
//         result = a - b;
//         printf("%d - %d = %d", a, b, result);
//         break;

//     case '/':
//         result = a / b;
//         printf("%d / %d = %d", a, b, result);
//         break;

//     case '*':
//         result = a * b;
//         printf("%d * %d = %d", a, b, result);
//         break;

//     default:
//         break;
//     }

//     return 0;
// }

//Q4.Print the multiplication table of a given number up to n
// #include<stdio.h>

// int main()
// {
//     int n;
//     printf("Enter a number :");
//     scanf("%d" , &n);

//     for(int i = 1 ; i <= 10 ; i++)
//     {
//         printf("%d X %d = %d\n" , n , i , n * i);
//     }

//     return 0;
// }

//Q5.Find the sum of digits of a number.
// #include<stdio.h>

// int main()
// {
//     int n;
//     int sum = 0 , digit;

//     printf("Enter a number : ");
//     scanf("%d" , &n);

//     for(; n > 0 ; n /= 10)
//     {
//         digit = n % 10;
//         sum += digit;
//     }

//     printf("Sum of digit is : %d" , sum);

//     return 0;
// }

//Q6.Reverse a given integer.
// #include<stdio.h>

// int main()
// {
//     int n;
//     int rev = 0, rem , temp;

//     printf("enter n :");
//     scanf("%d" , &n);

//     temp = n;

//     for(; n > 0 ; n /= 10)
//     {
//         rem = n % 10;
//         rev = rev * 10 + rem;
//     }

//     printf("%d" , rev);

//     return 0;
// }

//Q7.Check whether a number is prime.

// #include<stdio.h>

// int main()
// {
//     int n;
//     int count = 0;
//     printf("Enter a number : ");
//     scanf("%d" , &n);

//     for(int i = 1 ; i <= n ; i++)
//     {
//         if(n % i == 0)
//         {
//             count ++;
//         }
//     }

//     if(count == 2)
//     {
//         printf("%d is a prime number" , n);
//     }
//     else{
//         printf("%d is not a prime number" , n);
//     }

//     return 0;
// }

// Q8. * * * *
//     * * * *
//     * * * *
//     * * * *

#include<stdio.h>
int main()
{
    for(int i = 0 ; i < 4 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            printf("* ");
        }
        printf(" \n");
    }
    return 0;
}