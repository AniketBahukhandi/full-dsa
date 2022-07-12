#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,temp;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        temp=a+b;
        a=b;
        b=temp;
    }
}