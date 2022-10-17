#include <bits/stdc++.h>

using namespace std;

void Odd_sum_segments(int *arr, int size, int segments){
    int odd_count=0;
    vector<int>index;
    for(int i=0;i<size;i++){
        if(arr[i]%2==1)
            odd_count++;
    }
    if(segments>odd_count)
        cout << "NO\n";
    else if(odd_count%2==segments%2){
        cout << "YES" << endl;
        for(int j=0;j<size;j++){
            if(segments-1==0)
                break;
            if(arr[j]%2==1) {
                segments--;
                cout << j+1 << ' ';
            }
        }
        cout << size << '\n';
    }
    else
        cout << "NO\n";
}

int main()
{
    int test_cases, size, segments;
    cin >> test_cases;
    int *arr;
    for(int i=0;i<test_cases;i++){
        cin >> size;
        cin >> segments;
        arr=new int[size];
        for(int j=0;j<size;j++){
            cin >> arr[j];
        }
        Odd_sum_segments(arr,size,segments);
        delete []arr;
    }
    system("pause");
    return 0;
}