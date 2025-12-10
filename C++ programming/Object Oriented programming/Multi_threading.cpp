/*Multithreading is the process of executing multiple tasks
or programs known as thread to run concurrently in order to
achieve faster execution and better performance.*/

#include <iostream>
#include <thread>
using namespace std;

void task1()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Task 1 running..." << endl;
    }
}
void task2()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Task 2 running..." << endl;
    }
}
int main()
{
    thread t1(task1); // Assigned task1 to t1
    thread t2(task2); // Assigned task2 to t2

    t1.join(); // Join() waits for thread to finish
    t2.join(); // Join() waits for thread to finish

    return 0;
}