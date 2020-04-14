#include<iostream>
using namespace std;
int main() {
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    if(age>=18)
    { 
        cout<<"You are eligible to vote"<<endl;
     }
    else
    {
        cout<<age<<"\nYour age is  less than 18"<<"\nWait until 18"<<endl;
    }
    return 0;
}
