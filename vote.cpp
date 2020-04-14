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
        cout<<"You are not eligible to vote";
        cout<<"\nYour age "<<age<<" is  less than 18"<<"\nWait until 18"<<endl;
    }
    return 0;
}
