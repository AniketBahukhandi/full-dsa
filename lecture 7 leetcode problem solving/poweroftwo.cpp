#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=1;
    string res="false";
    for(int i=1;i<=30;i++){
        if(ans==n){
            res="true";
        }
        ans=ans*2;
    }
    cout<<res;
}