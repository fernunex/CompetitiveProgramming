// 11786 - Global Raining at Bididibus
// Author: Fer Nuñez

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        stack<int> st;
        int res = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '/' && !st.empty()){
                res += i - st.top();
                st.pop();
            } else if(s[i] == '\\') st.push(i);
        }
        cout << res << endl;
    }

    return 0;
}
