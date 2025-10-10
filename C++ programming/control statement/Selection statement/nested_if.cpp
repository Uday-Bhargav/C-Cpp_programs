/*if a student wants to register in a university for a course,check their eligibility on the 
basis of their marks in competetive exam with the help of nested if statements.*/

#include<iostream>
using namespace std;

int main(){
    float pre , mains , school ;

    cout<<"Enter pre marks(out of 100):";
    cin>>pre;

    cout<<"Enter mains marks(out of 100):";
    cin>>mains;

    cout<<"Enter school final CGPA(out of 10):";
    cin>>school;

    if(pre >= 50)
    {
        if(mains >= 60)
        {
            if(school >= 7.5)
            {
                cout<<"Congratulations!!You are eligible for admission";
            }
            else
            {
                cout<<"Not eligible due to less CGPA :(";
            }
        }
        else
        {
            cout<<"Not eligile due less marks in main exam :(";
        }
    }
    else
    {
        cout<<"Not eligible due to less marks in prelims exam :(";
    }

    return 0;
}