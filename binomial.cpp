#include<iostream>
using namespace std;
int fact(int n){
   int  factorial=1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n,r;
    cout<<"Enter the number of items and no. of items being chosen at a time:";
    cin>>n>>r;
   int ans=fact(n)/(fact(n-r)*fact(r));
    cout<<ans<<endl;
    return 0;
}
