 #include<iostream>
 using namespace std;
 int main()
 {
 int n;
 cin>>n;
 int pro=1,sum=0;
        while(n!=0){
            int d=n%10;
            pro=pro*d;
            sum=sum+d;
            n=n/10;
        }
    int ans=pro-sum;
    cout<<ans;
     return 0;
 }
        