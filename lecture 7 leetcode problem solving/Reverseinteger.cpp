 #include <iostream>
 using namespace std;
 int main(){
    int n,  ans=0;
    cin>>n;
    while(n!=0){
        int d=n%10;
        if(ans>INT_MAX/10||ans<INT_MIN/10){
            return 0;
        }
        ans=ans*10+d;
        n=n/10;
    }
    cout<<ans;
 }