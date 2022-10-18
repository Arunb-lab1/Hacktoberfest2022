#include<bits/stdc++.h>
using namespace std;
void seiveOfEratoSthness(bool isPrime[], int n){
    isPrime[0] = false;
    isPrime[1] = false;

    for(int i=2; i*i<=n;i++){
        for(int j=2*i;j<=n;j=j+i){
            isPrime[j]=false;
        }
    }
}

int main(){
    int N=20;
    bool isPrime[N+1];
    memset(isPrime, true, sizeof(isPrime));
    seiveOfEratoSthness(isPrime, N);
    cout<<"\n after find:\n";
    for(int i=0; i<=N; i++) cout<<i<<" "<<isPrime[i]<<endl;
    // for(int i=0; i<=N; i++) cout<<endl<<i<<" "<<(isPrime[i]==0)?"false":"true";


    return 0;
}