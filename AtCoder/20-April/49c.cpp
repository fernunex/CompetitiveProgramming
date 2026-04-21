// https://atcoder.jp/contests/abc049/tasks/arc065_a

#include<bits/stdc++.h>
using namespace std;

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     cin >> s;
//     reverse(s.begin(), s.end());
//     string s1, s2, s3, s4;
//     s1 = "dream";
//     s2 = "dreamer";
//     s3 = "erase";
//     s4 = "eraser";
//     reverse(s1.begin(), s1.end());
//     reverse(s2.begin(), s2.end());
//     reverse(s3.begin(), s3.end());
//     reverse(s4.begin(), s4.end());


//     int l = 0;
//     while (l+5 <= s.size())
//     {
//         if((string_view) s.substr(l,5) == s1){
//             l+=5;
//         } else if(l+7 <= s.size() && (string_view) s.substr(l,7) == s2){
//             l+=7;
//         } else if((string_view) s.substr(l,5) == s3){
//             l+=5;
//         } else if(l+6 <= s.size() && (string_view) s.substr(l,6) == s4){
//             l+=6;
//         } else {
//             cout << "NO\n";
//             return 0;
//         }
//     }
//     cout << (l >= s.size()? "YES\n": "NO\n");
//     // cout << "l:" << l << endl;
    
//     return 0;
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    vector<string> w = {"maerd", "remaerd", "esare", "resare"};

    // cout << "sw1:" << w[0].size() << endl;
    int l = 0;
    while(l < s.size()){
        bool f = false;
        for(auto wo : w){
            if(l+wo.size() <= s.size() && string_view(s).substr(l,wo.size()) == wo){
                f = true;
                l += wo.size();
                break;
            }
        }

        if(!f){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}