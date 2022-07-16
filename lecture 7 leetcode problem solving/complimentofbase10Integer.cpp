#include<iostream>
#include<cmath>

using namespace std;
int main(){
 /*bruteforce approach
    int n,ans=0,res=0,i=0,d;
    cin>>n;
    while(n!=0){
        int bit=n&1;
        ans=bit*pow(10,i)+ans;
        i+=1;
        n=n>>1;
    }
    i=0;
    while(ans!=0){
        int digit=ans%10;
        if(digit==1){
            d=0;
        }
        else{
            d=1;
        }
        res=d*pow(2,i)+res;
        i+=1;
        ans=ans/10;
    }
    cout<<res;
*/
int n;
cin>>n;
int comp=n;
int mask=0;
if(n==0){    //edge case;
    cout<<1;
}
else{
while(n!=0){
n=n>>1;
mask=(mask<<1)|1;
}
int ans=(~n)&mask;
cout<<ans;
}
}