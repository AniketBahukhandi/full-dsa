#include<iostream>
using namespace std;
int main()
{   int n;
    cout<<"enter the size n for n*n pattern ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}