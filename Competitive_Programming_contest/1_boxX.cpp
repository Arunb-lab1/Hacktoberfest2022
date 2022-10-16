#include <bits/stdc++.h>

using namespace std;

vector<int> box(int *q, int size){
    int *max, max_num=-9999,count=0;
    vector<int>p;
    vector<int>a;
    for (int i=0;i<size;i++)
        p.push_back(i+1);

    int k;
    do{
        if(q[0]==p[0]){
            for(k=1;k<size;k++){ //0 1 2
                max_num=-9999;
                for(int m=0;m<=k;m++)
                    if(max_num<p[m])
                        max_num=p[m];

                if(q[k]!=max_num)
                    break;

            }

            if(k==size){
                return p;
            }
        }
    }while(next_permutation(p.begin(), p.end()));
    a.push_back(-1);
    return a;
}

int main()
{
    int test_cases, size;
    vector<int>ans;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        cin >> size;
        int *arr;
        arr=new int[size];
        for(int j=0;j<size;j++){
            cin >> arr[j];
        }
        ans= box(arr,size);
        for(int m=0;m<ans.size();m++){
            cout << ans[m] << ' ';
        }
        delete []arr;
    }
    return 0;
}