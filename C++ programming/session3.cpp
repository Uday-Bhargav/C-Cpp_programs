//Q1.Create a function to find the square of a number.
// #include<iostream>
// using namespace std;

// int square(int n);

// int square(int n)
// {
//     return n * n;
// }

// int main()
// {
//     int result = square(15);
//     cout << result;
    
//     return 0;
// }

//Q2.Create a function to check whether a number is even or odd.

// #include<iostream>
// using namespace std;

// bool check(int num);

// bool check(int num)
// {
//     return(num % 2 == 0);
// }

// int main()
// {
//     int n = 7;

//     if(check(n)){
//         cout << n << " is even";
//     }else{
//         cout << n << " is odd";
//     }

//     return 0;
// }

//Q3.Swap two numbers using references in C++.

// #include<iostream>
// using namespace std;

// int swap(int &a, int &b);

// int swap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main()
// {
//     int x = 10 , y = 20;
//     cout << "Before swap : " << x << " , " << y << endl;
//     swap(x , y);
//     cout << "After swap : " << x << " , " << y << endl;

//     return 0;
// }

//Q4.Find factorial using recursion.

// #include<iostream>
// using namespace std;

// int factorial(int n);

// int factorial(int n)
// {
//     if(n == 0 || n == 1){
//         return 1;
//     }else{
//         return n * factorial(n - 1);
//     }
// }

// int main()
// {
//     cout << factorial(5);
//     return 0;
// }


//Q5.Checking on own.

// #include<iostream>
// using namespace std;

// void printSum(int a, int b)
// {
//     cout << a + b;
// }

// int main()
// {
//     printSum(5 , 6);
//     return 0;
// }

//Q6.Find the sum of all elements in an array. 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int sum = 0;

//     int size;
//     cout << "Enter size of array elements : ";
//     cin >> size;

//     int arr[100];
//     cout << "Enter array elements : " << endl;
//     for(int i = 0 ; i < size ; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Array Elements are : " << endl;
//     for(int i = 0 ; i < size ; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     for(int i = 0 ; i < size ; i++)
//     {
//         sum = sum + arr[i];
//     }

//     cout << "Sum of elements of array is : " << sum << endl;

//     return 0;
// }

//Q7.Find the average of array elements.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int sum = 0;

//     int size;
//     cout << "Enter size of array elements : ";
//     cin >> size;

//     int arr[100];
//     cout << "Enter array elements : " << endl;
//     for(int i = 0 ; i < size ; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Array Elements are : " << endl;
//     for(int i = 0 ; i < size ; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     for(int i = 0 ; i < size ; i++)
//     {
//         sum = sum + arr[i];
//     }

//     cout << "Sum of elements of array is : " << sum << endl;

//     float average = sum / size;
//     cout << "Average of sum of array elements is : " << average << endl;

//     return 0;
// }

//Q8.Find the largest and smallest elements in an array.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter size : ";
//     cin  >> n;

//     int arr[100];
//     cout << "Enter array elements : ";
//     for(int i = 0 ; i < n ; i++)
//     {
//         cin >> arr[i];
//     }
    
//     cout << "Array elements are : ";
//     for(int i = 0 ; i < n ; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     int largest , smallest;
//     largest = arr[0];
//     smallest = arr[0];

//     for(int i = 0 ; i < n ; i++)
//     {
//         if(arr[i] > largest)
//         {
//             largest = arr[i];
//         }
   
//         if(arr[i] < smallest)
//         {
//             smallest = arr[i];
//         }
//     }

//     cout << "Largest element in array is : " << largest << endl;
//     cout << "Smallest element in array is : " << smallest << endl;
    
//     return 0;
// }

//Q9.Find the second-largest element.

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter size : ";
//     cin  >> n;

//     vector<int> arr(n);
//     cout << "Enter array elements : ";
//     for(int i = 0 ; i < n ; i++)
//     {
//         cin >> arr[i];
//     }
    
//     cout << "Array elements are : ";
//     for(int i = 0 ; i < n ; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     int largest , second_largest;
//     largest = arr[0];
//     second_largest = arr[1];

//     for(int i = 0 ; i < n ; i++)
//     {
//         if(arr[i] > largest)
//         {
//             second_largest = largest;
//             largest = arr[i];
//         }
//     }

//     cout << "Second Largest element in array is : " << second_largest << endl;
    
//     return 0;
// }

//Q10.Reverse an array without using another array.

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter size : ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter array elements : ";
//     for(int i = 0 ; i < n ; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << endl;

//     cout << "Array elements are : ";
//     for(int i = 0 ; i < n ; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     cout << "Reverse of array is : " << endl;
//     for(int i = n - 1 ; i >= 0 ; i--)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

//Q11.Find the frequency of a given element.

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter size : ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter array elements : ";
//     for(int i = 0 ; i < n ; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Array elements are : ";
//     for(int i = 0 ; i < n ; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     int key;
//     cout << "Enter element to check frequency : ";
//     cin >> key;

//     int count = 0;
//     for(int i = 0 ; i < n ; i++)
//     {
//         if(key == arr[i])
//         {
//             count++;
//         }
//     }

//     cout << "Frequency of given element " << key << " is : " << count << endl;

//     return 0;
// }

//Q12.Add two matrices.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int matrix_1[2][3]=
//     {
//         {1 , 2 , 3},
//         {4 , 5 , 6}
//     };

//     int matrix_2[2][3]=
//     {
//         {3 , 2 , 1},
//         {7 , 8 , 9}
//     };

//     cout << "Matrix 1 : " << endl;
//     for(int i = 0 ; i < 2 ; i++)
//     {
//         for(int j = 0 ; j < 3 ; j++)
//         {
//             cout << matrix_1[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;

//     cout << "Matrix 2 : " << endl;
//     for(int i = 0 ; i < 2 ; i++)
//     {
//         for(int j = 0 ; j < 3 ; j++)
//         {
//             cout << matrix_2[i][j] << " ";
//         }
//         cout << endl;
//     }

//     int sum[2][3];
//     for(int i = 0 ; i < 2 ; i++)
//     {
//         for(int j = 0 ; j < 3 ; j++)
//         {
//             sum[i][j] = matrix_1[i][j] + matrix_2[i][j];
//         }
//         cout << endl;
//     }

//     cout << "Sum of matrices : " << endl ;
//     for(int i = 0 ; i < 2 ; i++)
//     {
//         for(int j = 0 ; j < 3 ; j++)
//         {
//             cout << sum[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//Q13.Linear search.

#include<iostream>
#include<vector>
using namespace std;

bool linear_search(int arr[] , int n , int key)
{
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;

    int arr[100];
    cout << "Enter array elements : ";
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are : ";
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int key;
    cout << "Enter element to search : ";
    cin >> key;

    bool found = linear_search(arr , n , key);

    if(found)
    {
        cout << "Element found" <<  endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}