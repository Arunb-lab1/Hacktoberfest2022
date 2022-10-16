#include <bits/stdc++.h>

using namespace std;

int finding_nearest(unordered_map<int , int > &a, int n, int s){
    int value1,value2,count1=0,count2=0;
    if(a.count(s)) {
        value1 = s + 1;
        value2 = s - 1;
        for (;;) {
            if (!a.count(value1)) {
                break;
            } else {
                value1++;
                count1++;
            }
        }
        for (;;) {
            if (!a.count(value2))
                break;

            else {
                value2--;
                count2++;
            }
        }
        if(count1>=count2){
            if(value2>0)
                return abs(s-value2);
            else
                return abs(value1-s);
        }
        else{
            if(value1<=n)
                return abs(s-value1);
            else
                return abs(s-value2);
        }
    }
    else
        return 0;
}

int main()
{
    int test_cases, n,s,k,num,ans;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++) {
        cin >> n;
        cin >> s;
        cin >> k;
        unordered_map<int, int> a;
        for (int j = 0; j < k; j++) {
            cin >> num;
            a[num] = num;
        }
        ans=finding_nearest(a,n,s);
        cout << ans << '\n';
    }
    system("pause");
    return 0;
}