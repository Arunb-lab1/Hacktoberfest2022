#include <bits/stdc++.h>

using namespace std;

void collecting_packages(int vector_size){
    int num1, num2, x=0, y=0;
    string ans;
    vector<pair<int , int >> a;
    for(int i=0;i<vector_size;i++){
        cin >> num1;
        cin >> num2;
        a.push_back(make_pair(num1,num2));
    }
    sort(a.begin(), a.end());

    for(int i=0; i<a.size(); i++){
        int j, k;
        if(x>a[i].first) {
            cout << "NO\n";
            return;
        }

        if(y>a[i].second) {
            cout << "NO\n";
            return;
        }

        for(j=x;j<a[i].first;j++,x++)
            ans.push_back('R');

        for(k=y;k<a[i].second;k++,y++)
            ans.push_back('U');
    }

        cout << "YES\n";
        cout << ans << '\n';
}

int main()
{
    int test_cases, size;
    vector<int>ans;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        cin >> size;
        collecting_packages(size);
    }
    return 0;
}