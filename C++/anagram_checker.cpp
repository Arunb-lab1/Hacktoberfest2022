#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    cout<<"Enter string1: ";
    cin>>s1;
    cout<<"Enter string2: ";
    cin>>s2;
    int a[26] = {0};
    int b[26] = {0};
    int i, flag=0;

    for(i = 0; s1[i] != '\0'; i++)  // counts frequency of each letter in string1
        a[s1[i] - 'a']++;
    for(i = 0; s2[i] != '\0'; i++)  // counts frequency of each letter in string2
        b[s2[i] - 'a']++;
    for (i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
            flag = 1;      // flag is set if any letter is different.
    }
    if (flag == 1)
        cout << "Given strings are not anagrams!!!";
    else
        cout << "Given strings are anagrams!!!";

        return 0;
}

