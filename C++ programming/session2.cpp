//Q1.Check whether a number is positive, negative or zero.
// #include<iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Enter a number :";
//     cin >> num;

//     if(num > 0)
//     {
//         cout << "Positive" << endl;
//     }
//     else if(num < 0)
//     {
//         cout << "Negative" << endl ;
//     }
//     else{
//         cout << "zero" << endl;
//     }
//     return 0;
// }

//Q2.Find the largest among three numbers.
// #include<iostream>
// using namespace std;

// int main()
// {
//     int a, b, c;
//     cout << "Enter three numbers :" << endl;
//     cin >> a >> b >> c;
    
//     if(a >= b && a >= c)
//     {
//         cout << "a is largest" << endl;
//     }
//     else if(b >= a && b >= c)
//     {
//         cout << "b is largest" << endl;
//     }
//     else{
//         cout << "c is largest" << endl;
//     }

//     return 0;
// }

//Q3.Create a calculator using switch-case.
// #include<iostream>
// using namespace std;

// int main()
// {
//     int a, b;
//     char op;
//     cout << "Enter a :" << endl;
//     cin >> a;
//     cout << "Enter a operator(+ , - , / , *) :" << endl;
//     cin >> op;
//     cout << "Enter b :" << endl;
//     cin >> b;

//     switch (op)
//     {
//     case '+':
//         cout << "=" << a + b << endl;
//         break;
     
//     case '-':
//         cout << "=" << a - b << endl;
//         break;
        
//     case '/':
//         cout << "=" << a / b << endl;
//         break;
        
//     case '*':
//         cout << "=" << a * b << endl;
//         break;    
    
//     default:
//         break;
//     }

//     return 0;
// }

//Q4.Print the multiplication table of a given number up to n.
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter a number :" << endl;
//     cin >> n;

//     for(int i = 1 ; i <= 10 ; i++)
//     {
//         cout << n << " X " << i << " = " << n * i << endl;
//     }

//     return 0;
// }

//Q5.Find the sum of digits of a number.
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int sum = 0 , digit;

//     cout << "Enter a number : " << endl;
//     cin >> n;

//     for(; n > 0 ; n /= 10)
//     {
//         digit = n % 10;
//         sum += digit;
//     }

//     cout << "Sum of digit is : " << sum << endl;

//     return 0;
// }

//Q6.Reverse a given integer.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int rev = 0, rem , temp;

//     cout << "enter n :" << endl;
//     cin >> n;

//     temp = n;

//     for(; n > 0 ; n /= 10)
//     {
//         rem = n % 10;
//         rev = rev * 10 + rem;
//     }

//     cout << rev << endl;

//     return 0;
// }

//Q7.Palindrome.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int rev = 0, rem , temp;

//     cout << "enter n :" << endl;
//     cin >> n;

//     temp = n;

//     for(; n > 0 ; n /= 10)
//     {
//         rem = n % 10;
//         rev = rev * 10 + rem;
//     }

//     if(temp == rev)
//     {
//         cout << "Palindrome " << rev << endl;
//     }
//     else{
//         cout << "Not palindrome " << rev << endl;
//     }

//     return 0;
// }

//Q8.Check whether a number is prime.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int count = 0;
//     cout << "Enter a number : " << endl;
//     cin >> n;

//     for(int i = 1 ; i <= n ; i++)
//     {
//         if(n % i == 0)
//         {
//             count ++;
//         }
//     }

//     if(count == 2)
//     {
//         cout << n << " is a prime number. " << endl;
//     }
//     else{
//         cout << n << " is not a prime number." << endl;
//     }

//     return 0;
// }

//Q9.* * * *  
//   * * * *  
//   * * * *  
//   * * * *

// #include<iostream>
// using namespace std;

// int main()
// {
//    for(int i = 0 ; i < 4 ; i++)
//    {
//     for(int j = 0 ; j < 4 ; j++)
//     {
//         cout << "* ";
//     }
//      cout << " " << endl;
//    }
//    return 0;
// }

// Q10.*
//     * *
//     * * *
//     * * * *

// #include<iostream>
// using namespace std;

// int main()
// {
//    for(int i = 0 ; i < 4 ; i++)
//    {
//     for(int j = 0 ; j <= i ; j++)
//     {
//         cout << "* ";
//     }
//      cout << " " << endl;
//    }
//    return 0;
// }

// Q11.1
//     1 2
//     1 2 3
//     1 2 3 4

// #include<iostream>
// using namespace std;

// int main()
// {
//    for(int i = 1 ; i <= 4 ; i++)
//    {
//     for(int j = 1 ; j <= i ; j++)
//     {
//         cout << j << " ";
//     }
//      cout << " " << endl;
//    }
//    return 0;
// }

// Q12.* * * *
//     * * *
//     * *
//     *

// #include<iostream>
// using namespace std;

// int main()
// {
//    for(int i = 3 ; i >= 0 ; i--)
//    {
//     for(int j = 0 ; j <= i ; j++)
//     {
//         cout << "* ";
//     }
//      cout << " " << endl;
//    }
//    return 0;
// }

