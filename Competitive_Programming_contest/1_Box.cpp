#include <bits/stdc++.h>

using namespace std;

vector<int> box(int *q, int size){
    int max_num;
    vector<int>value_array(size,0);
    vector<int>max_array;
    vector<int>a;
    vector<int>b(2,0);
    map<int , int > value_occupied;
    for(int u=0;u<size-1;u++){
        value_occupied[u+1]=u+1;
    }

    b[1]=-1;
    a.push_back(0);
    if(size==2 && q[1]==1){
        a.push_back(1);
        return a;
    }
    for(int i=1;i<size;i++){
        if(q[i]!=q[i-1]){
            a.push_back(q[i]);
            value_occupied.erase(q[i]);
        }
        else{
            a.push_back(-1);
        }
    }

    map<int , int >::iterator itr=value_occupied.begin();

    for(int i=0;i<a.size();i++){
        if(a[i]==-1) {
            a[i] = itr->first;
            itr++;
        }
    }

    int k,max_index=0;
    max_array.push_back(max(a[1],a[2])); //max[0]=max(q1,q2)
    for(int m=3;m<size;m++) {
        max_array.push_back(max(max_array[max_index++],a[m]));
    }
    max_index=0;

    if(q[1]==a[1]){
        for(k=2;k<size;k++){
            if(q[k]!=max_array[max_index++])
                break;
        }

        if(k==size){
            return a;
        }
    }
    return b;
}

int main()
{
    int test_cases, size;
    vector<int>ans;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        cin >> size;
        int *arr;
        arr=new int[size+1];
        arr[0]=0;
        for(int j=1;j<=size;j++){
            cin >> arr[j];
        }
        ans = box(arr,size+1);
        for(int m=1;m<ans.size();m++)
            cout << ans[m] << ' ';
        cout << endl;
        delete []arr;
    }
    return 0;
}