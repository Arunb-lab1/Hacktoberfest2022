#include <bits/stdc++.h>

using namespace std;

int candies(int n, int k){
    int sum=0,i,left_actions,eat=0;
    for(i=0;i<=n;i++){
        sum=sum+i;
        if(sum>=k)
            break;
    }

    int unbalanced=sum-k;
    left_actions=n-i;
    if(left_actions==unbalanced)
        return unbalanced;
    i++;
    left_actions=left_actions-unbalanced;
    eat=eat+unbalanced;
    while(left_actions>0){
        left_actions=left_actions-i-1;
        if(left_actions<0)
            return eat;
        eat=eat+i;
        i++;
    }
    return eat;
}

int main()
{
    int actions, left, ans;
    cin >> actions;
    cin >> left;
    ans = candies(actions,left);
    cout << ans << endl;
    system("pause");
    return 0;
}