#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int k=1;k<=n-i;k++){
        cout<<"_"<<" ";
    }
    for(int j=1;j<=i;j++){
    cout<<j<<" ";
    }
    for(int l=i-1;l>=1;l--){
        cout<<l<<" ";
    }
    cout<<endl;
}
    return 0;
}