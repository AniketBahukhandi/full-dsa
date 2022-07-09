#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    cout<<"The sum of the even number is ";
    int sum=0;
    for(int i=0;i<n;i++){
        if(i%2==0)
            sum=sum+i;
    }
    cout<<sum;

}