#include<iostream>
using namespace std;
int main()
{
    int n,ctr=1;
    cout<<"enter size n ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<ctr<<" ";
            ctr++;
        }
        cout<<endl;
    }
    return 0;
}