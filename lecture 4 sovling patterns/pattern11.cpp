#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ctr=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<char('A'+ctr)<<' ';
            ctr++;
        }
        cout<<endl;
    }
    return 0;
}