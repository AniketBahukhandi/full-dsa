#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,ans=0,i=0;
    cin>>n;
    while(n!=0){
    int d=n%10;
    ans=d*pow(2,i)+ans;
    i+=1;
    n=n/10;
    }
    cout<<ans;
}