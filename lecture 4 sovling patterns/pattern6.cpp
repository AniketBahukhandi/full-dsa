#include<iostream>
using namespace std;
int main()
{   
    int n,ctr;
    cin>>n;
    for(int i=1;i<=n;i++){
        ctr=i;
        for(int j=1;j<=i;j++){
            cout<<ctr<<' ';
            ctr++;
        }
    cout<<endl;
    }

    return 0;
}   