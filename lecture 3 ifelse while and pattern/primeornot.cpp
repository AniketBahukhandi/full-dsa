#include<iostream>
using namespace std;
int main()
{   int no,ctr=0;
    cout<<"enter the number to check ";
    cin>>no;
    for(int i=2;i<no/2;i++)
    {
        if(no%i==0){
            ctr++;
            break;
        }
    }
    if(ctr!=0){
        cout<<"the number is not prime";
    }
    else{
        cout<<"the number is prime";
    }
}