#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int ctr=1;
for(int i=1;i<=n;i++){
    for(int k=1;k<=n-i;k++){
        cout<<'_'<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<ctr<<' ';
        ctr++;
    }
    cout<<endl;
}
    return 0;
}