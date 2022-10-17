#include <bits/stdc++.h>

using namespace std;

long long find_pairs(int a, int b){
    //a.b+a+b=a.10^(no of digits in b)+b
    //b+1=10^(no of digits in b)
    long long count=0;
    long long second;

    for(long long i=9;i<=b;i=i*10+9) {
        second = pow(10, to_string(i).length());
        if (i+1 == second) {
            count++;
        }
    }
    return a*count; //finding pair with each element of a
}

int main()
{
    int test_cases, a,b;
    long long ans;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++) {
        cin >> a;
        cin >> b;
        ans = find_pairs(a,b);
        cout << ans << '\n';
    }
    system("pause");
    return 0;
}